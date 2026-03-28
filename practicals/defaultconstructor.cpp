#include <iostream>
using namespace std;

class student {
  public:
         student() {
                  cout << "default calling" << endl;

         }
};

int main () {
   student obj1;
   return 0;

}
