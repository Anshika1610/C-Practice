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
    //This is the method to get the pointer in the stack
    Rectangle r1;
    Rectangle *p1; 
    p1=&r1;
    p1->length=10;
    p1->breadth=5;
    cout<<"The area of r1 is: "<<p1->area()<<" The perimeter of r1 is: "<<p1->perimeter()<<endl;
    
    //This is the method of getting the pointer in heap
    Rectangle *p2=new Rectangle;
    p2->length=6;
    p2->breadth=3;
    cout<<"The area of p2 is: "<<p2->area()<<" The perimeter of p2 is: "<<p2->perimeter();
}
