#include <iostream>
using namespace std;

int x=10;
int main(){
    int x=20;
    if(x>10){
        int x=30;
        cout<<x<<endl;
    }
    cout<<x<<endl;
    cout<<::x<<endl;  //Accessing global variable
}

