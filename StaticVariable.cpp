#include <iostream>
using namespace std;

int func(){
    static int v=0;  //This gives it the features of global variable i.e. always in main memory but it is not accessible to all functions
    int a=5;
    cout<<a<<" "<<v<<endl;
    v++;
}
int main(){
    func();
    func();
}
