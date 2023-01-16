#include <iostream>
using namespace std;

void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}
int main(){
    int x=6, y=10;
    swap(x,y);
}
