#include <iostream>

using namespace std;

class Base{
  public:
    void display(){
        cout<<"Display of Parent."<<endl;
    }
};

class Derived:public Base{
  public:
    void display(){ 
        //The name of this function is the same as the name of the function in parent class
        cout<<"Display of Child."<<endl;
    }
};

int main(){
    Derived d;
    d.display(); //This will call its own function 
}
