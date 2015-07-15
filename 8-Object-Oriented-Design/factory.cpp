
class Car{
public : 
  virtual show()=0;
}

class CarA:class Car{
  void show(){
    cout<< "i am carA" <<endl;
  }
}

class CarB:class Car{
  void show(){
    cout<< "i am carB" <<endl;
  }
}

class CarFactory{
    static Car* buildCar(string type){
      if(type=="CarA")
        return new CarA();
      else if(type=="CarB")
        return new CarB();
    }
}

