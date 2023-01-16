#include <iostream>
using namespace std;

int max(int a, int b, int c=0){
    return (a>b & a>c)?a:(b>a & b>c)?b:c;
}

int main()
{
    cout<<max(1, 6, 5);
    
}
