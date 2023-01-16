#include <iostream>
using namespace std;

class inline_and_non_inline{
  public:
      int inline1(){
          cout<<"Inline"<<endl;
          return 0;
       }
      int non_inline();
      
      inline int non_inline_but_inline(); //Even though parameters not mentioned inside, still inline because mentiond
};
        

int inline_and_non_inline::non_inline(){
    cout<<"Non Inline"<<endl;
    return 0;
}

int inline_and_non_inline::non_inline_but_inline(){
    cout<<"Inline even though defined outside class."<<endl;
    return 0;
}

int main(){
    inline_and_non_inline r;
    r.inline1();  //Inline function since defined inside class
    r.non_inline();  //Not inline function since defined outside class
    r.non_inline_but_inline();  //Inline since inline mentioned before function inside class
}
