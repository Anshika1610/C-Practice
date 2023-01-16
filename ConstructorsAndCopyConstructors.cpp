#include <iostream>
using namespace std;

class Rectangle{
    private:
        int length;
        int breadth;
    public:
        int setlength(int l){
            if(l>=0){
                length=l;
            }
            else{
                cout<<"Length cannot be negative hence we assign length=0.\n";
                length=0;
            }
            return 0;
        }  
        int getlength(){
            return length;
        }
        int setbreadth(int b){
            if(b>=0){
                breadth=b;
            }
            else{
                cout<<"Breadth cannot be negative hence we assign breadth=0.\n";
                breadth=0;
            }
            return 0;
        }
        int getbreadth(){
            return breadth;
        }
        int area(){
            return length*breadth;
        }
        int perimeter(){
            return 2*(length+breadth);
        }
        Rectangle(){  //Constructor
            length=1;
            breadth=1;
        }
        Rectangle(int l, int b){ //Constructor, first constructor can be omitted by writing Rectangle(int l=0, int b=0)
            setlength(l);
            setbreadth(b);
        }
        Rectangle(Rectangle &r){  //Copy Constructor
            length=r.length;
            breadth=r.breadth;
        }
};

int main(){
    Rectangle r1;
    cout<<r1.area()<<" "<<r1.perimeter()<<endl;
    
    Rectangle r2(10, 5);
    cout<<r2.area()<<" "<<r2.perimeter()<<endl;
    
    Rectangle r3(r2);
    cout<<r3.area()<<" "<<r3.perimeter()<<endl;
    
}
