#include <iostream>

using namespace std;

class Assign{
  private:
    int length=10;
    int breadth=50;
    
  protected:
    int getlength(){
        return length;
    }
    int getbreadth(){
        return breadth;
    }
};

class Rectangle:public Assign{
  public:
    int area(){
        return getlength()*getbreadth();
    }
};

int main()
{
    Rectangle r;
    cout<<r.area();

    return 0;
}
