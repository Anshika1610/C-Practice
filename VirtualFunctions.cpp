#include <iostream>

using namespace std;

class Base{
  public:
    void display_without_virtual(){
        cout<<"Display of Parent without Virtual."<<endl;
    }
    virtual void display_with_virtual(){
        //Because virtual is added before, so the ptr will point to the class in child 
        cout<<"Display of Parent with Virtual."<<endl;
    }
    
};

class Derived:public Base{
  public:
    void display_without_virtual(){ 
        //The name of this function is the same as the name of the function in parent class
        cout<<"Display of Child without Virtual."<<endl;
    }
    void display_with_virtual(){
        cout<<"Display of Child with Virtual."<<endl;
    }
};

int main(){
    Base *ptr1=new Derived();
    ptr1->display_without_virtual(); //Displays text from parent's function
    
    Base *ptr2=new Derived(); 
    ptr2->display_with_virtual(); //Displays text from child's function 
}
