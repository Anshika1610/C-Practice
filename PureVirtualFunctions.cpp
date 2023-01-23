#include <iostream>

using namespace std;

class Car{
  public:
  //By making a virtual function = 0, we make sure all dervied classes compulsorily have this function
  //All classes dervied from Car need to have start() and stop() since they are pure virtual functions
  //This is done to achieve polymorphism so as all child classes have the same basic structure w/wo extra features
    virtual void start()=0; //Pure virtual function
    virtual void stop()=0;
};

class Innova:public Car{
  public:
    void start(){
        cout<<"Innova started."<<endl;
    }
    void stop(){
        cout<<"Innova stopped."<<endl;
    }
};

class Fortuner:public Car{
  public:
    void start(){
        cout<<"Fortuner started."<<endl;
    }
    void stop(){
        cout<<"Fortuner stopped."<<endl;
    }
};


int main(){
    Car *c=new Innova();
    c->start();
    c=new Fortuner();
    c->stop();
}
