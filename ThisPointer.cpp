#include <iostream>
using namespace std;

//Used to avoid ambiguity when variables and parameters are the same
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        Rectangle(int length, int breadth){
            this->length=length;  //length mentioned after this is length defined in private
            this->breadth=breadth;  /*breadth mentioned after = is the breadth used as parameter in Rectangle(int length, int breadth)*/
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
};

int main(){
    Rectangle r(10,5);
    cout<<r.area()<<" "<<r.perimeter();
}

