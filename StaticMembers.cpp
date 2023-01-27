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
    
    static int getcount(){
        //Note that only static members can be used in static methods
        //'return a++;' would be an error
        return count;
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
    cout<<Test::getcount()<<endl;  //Static member or function can be called by object or class
    cout<<t1.getcount()<<endl;
}
