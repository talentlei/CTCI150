
class Singleton{
private:
    static Singleton* _singleton;
    static std::mutex mtx;
    Singleton(){};

public :
    Singleton* getInstance(){
        if(_singleton==NULL){
            mtx.lock();
            if(_singleton==NULL){
                _singleton = new Singleton();
            }
            mtx.unlock();
        }
        return _singleton;
    }
};
