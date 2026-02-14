#include <iostream>
using namespace std;

void swapByValue(int a,int b){

  int temp = a;
  a=b;
  b=temp;

}

int main(){

           int x=10,y=20;
           swapByValue(x,y);
           cout << "After value swap: x=" << x << ",y=" << y << endl;

           return 0;

}
