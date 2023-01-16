#include <iostream>
using namespace std;

struct Demo1{
    int x;
    int y;
    int Display(){
        cout<<x<<" "<<y<<endl;
        return 0;
    }
};

class Demo2{
    public:
        int x;
        int y;
        int Display(){
            cout<<x<<" "<<y<<endl;
            return 0;
        }
};
int main(){
    Demo1 r1;
    r1.x=10;
    r1.y=5;
    r1.Display();
    
    Demo2 r2;
    r2.x=6;
    r2.y=3;
    r2.Display();
}
