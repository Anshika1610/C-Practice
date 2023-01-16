#include <iostream>
using namespace std;

template<class T>
T minmax(T a, T b){
    return a>b?a:b;
}

int main(){
    cout<<minmax(2,5);
}
