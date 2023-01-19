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
            length=0;
            cout<<"\n Length set to 0 since input was negative."<<endl;
        }
        return 0;
    }
    
    int setbreadth(int b){
        if(b>=0){
            breadth=b;
        }
        else{
            breadth=0;
            cout<<"\n Breadth set to 0 since input was negative."<<endl;
        }
        return 0;
    }
    
    int getlength(){
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
    
    Rectangle(int l=0, int b=0){
        setlength(l);
        setbreadth(b);
    }
};

class Cuboid:public Rectangle{  
    //This class is inherited from Rectangle and can access all public variables and functions of Rectangle.
    private:
        int height;
        
    public:
        int setheight(int h){
            if(h>=0){
                height=h;
            }
            else{
                height=0;
                cout<<"\nHeight set to 0 because it can't be negative."<<endl;
            }
            return 0;
        }
        
        int getheight(){
            return height;
        }
        
        Cuboid(int l=0, int b=0, int h=0){
            setlength(l);
            setbreadth(b);
            setheight(h);
        }
        
        int volume(){
            return getlength()*getbreadth()*getheight();
            return 0;
        }
        
        
};

int main()
{
    Rectangle r1(10,12);
    Cuboid c1(10,12,5);
    cout<<c1.volume()<<endl;
    cout<<r1.area()<<endl;
}
