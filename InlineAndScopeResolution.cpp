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
        
        int perimeter();  
//The function is just defined here without any return statement
        
        
        Rectangle(int l, int b){
            setlength(l);
            setbreadth(b);
        }
        
};

int Rectangle::perimeter(){  
//The function gets a return statement here using scope resolution
    return 2*(length+breadth);
}

int main(){
    /*area does not become a separate function, 
    it just becomes a part of main function whereas perimeter is still a separate function only called on use*/
    Rectangle r1(10, 5);
    cout<<r1.area()<<" "<<r1.perimeter()<<endl; 
//The call of area is called an inline function which should be avoided  
} 
