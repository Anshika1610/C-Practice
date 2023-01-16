#include <iostream>
using namespace std;

class Rectangle{
    public:  //If public is not used then r1 or r2 wouldn't be able to use legnth, breadth or any function
        int length;
        int breadth;
        int area(){  //Functions in a class are also known as method
            return length*breadth;
            
    }
        int perimeter(){
            return 2*(length+breadth);
            
        }
        
};

int main(){
    Rectangle r1, r2;  //r1 and r2 are objects of class Rectangle
    r1.length=10;
    r1.breadth=5;
    r2.length=6;
    r2.length=3;
    cout<<"The area of r1 is: "<<r1.area()<<" The perimeter of r1 is: "<<r1.perimeter()<<endl;
    cout<<"The area of r2 is: "<<r2.area()<<" The perimeter of r2 is: "<<r2.perimeter()<<endl;
}
