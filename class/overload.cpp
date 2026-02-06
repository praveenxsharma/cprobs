#include <iostream>
using namespace std;

class print{
  public:
    void display(int x)
    {
      cout<<x;
    }
    void display(double y)
    {
      cout<<y;
    }
};

int main(){
  print obj;
  obj.display(10);
  obj.display(10,20);

  return 0;
}
