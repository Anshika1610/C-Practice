#include <iostream>
using namespace std;

int x=0;
void func(){
    int a=5;
    x=x+a;
    cout<<x<<"\n";
}
 int main(){
    int t=5;
    func();
    x=x+t;
    cout<<x;
}
