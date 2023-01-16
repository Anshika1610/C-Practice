#include <iostream>
using namespace std;

int minmax(int a, int b){
    cout<<(a>b?a:b);
    return 0;
}

int main(){
    int (*func)(int a, int b);
    func=minmax;
    (*func)(5, 4);
}
