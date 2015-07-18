

class referenceCounter{
public : 
  explicit referenceCounter():counter(0){};
  explicit referenceCounter(const referenceCounter rc):counter(rc.counter){};
  void increase(){
    mtx.lock();
    counter++;
    mtx.unlock();
  }
  
  void decrease(){
    mtx.lock();
    counter--;
    mtx.unlock();
    return counter;
  }
  
private:
  mutex mtx;
  int  counter;
}

template<typename T>
class SmartPointer{
  public:
  explicit SmartPointer():pointer(0){
    rc = new referenceCounter();
  };
  explicit SmartPointer(T* p):pointer(p){
    rc = new referenceCounter();
    rc->increase();
  };
  explicit SmartPointer(SmartPointer* sp)
    :pointer(sp->pointer),rc(sp->rc){ 
      rc->increase();
    };
  
  SmartPointer& operator=(const SmartPointer* sp){
    if(sp!=this){
      if(rc!=NULL&&rc->decrease()==0){
        delete rc;
        delete pointer;
      }
      rc = sp->rc;
      pointer = sp->pointer;
      rc->increase();
    }
    return *this;
  }
  ~SmartPointer(){
    if(rc!=NULL && rc->decrease()==0){
      delete pointer;
      delete rc;
    }
  }
  private:
    referenceCounter* rc;
    T* pointer;
    
}
