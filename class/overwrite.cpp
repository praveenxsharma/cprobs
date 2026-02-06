#include <iostream>
using namespace std;

class a{
  public:
    void show();
      cout << "i am base class" ;

};

class b:public a{
  public:
    void show();
      cout << "i am child class";
};

int main(){
  B b ;
    b.show ;
}

