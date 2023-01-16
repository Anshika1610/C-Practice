#include <iostream>
using namespace std;

int func(int n){
    if(n>0){
        cout<<n<<endl; //n-1 afterwards
        
        cout<<endl;
        
        func(n-1);
        
        cout<<endl;
        
        cout<<n<<endl;  //n-1 before
    }
}

int main(){
    int x=5;
    func(x);
}
