#include <iostream>
using namespace std;

/*Data hiding ensures variables are hidden so that they can’t be changes as per user’s wish*/

//Accessor and mutator together are called property functions
class Rectangle{
    private:
        int length;
        int breadth;
    public:
        int setlength(int l){  //set is called mutator 
            if(l>=0){
                length=l;
            }
            else{
                cout<<"Length can't be negative.";
                length=0;
            }
            return 0;
        }
        int setbreadth(int b){
            if(b>=0){
                breadth=b;
            }
            else{
                breadth=0;
                cout<<"Breadth can't be negative so it is set to 0.\n";
                }
            return 0;
        }
        int getlength(){  //get is called accessor
            return length;
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
};

int main(){
    Rectangle r;
    r.setlength(10);
    r.setbreadth(-5);
    cout<<"Area: "<<r.area()<<" Perimeter: "<<r.perimeter();
  }
