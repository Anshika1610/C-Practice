#include <iostream>

using namespace std;


class Test{
  public:
    int a;
    static int count;  //It will be common for both the objects t1 an t2
    
    Test(){  //Constructor
        a=10;
        count++;
    }
};

int Test::count=0;

int main()
{
    Test t1, t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    t1.count=25;
    cout<<t2.count<<endl;  //Result is 25
}
