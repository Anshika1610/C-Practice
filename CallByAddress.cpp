#include <iostream>
using namespace std;

//This also swaps the values of actual variables
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int x=6, y=10;
    swap(&x,&y);
    cout<<x<<" "<<y;
}
