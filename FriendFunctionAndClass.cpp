#include <iostream>

using namespace std;

class New; //This was done so that error does not occur on encountering friend New before declaring New class

class Base{
  public:
    int a;
    friend New;  //Using this, New class can access all variables
  private:
    int b;
  protected:
    int c;
    
};

class New{
  public:
    Base num;
    void fun(){
    num.a=15;
    num.b=10;
    num.c=5;
    cout<<"a="<<num.a<<" b="<<num.b<<" c="<<num.c<<endl;}
  
};

int main(){
    New newnum;
    newnum.fun();
}
