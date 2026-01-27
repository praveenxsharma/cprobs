#include <iostream>
using namespace std;

int main()
{
  int num1,num2;
  int sum,diff,prod,mod;
  float div;

  cout << "Enter First Number:";
  cin >> num1 ;

  cout << "Enter second Number:";
  cin >> num2 ;

  sum = num1+num2 ;
  diff = num1-num2 ;
  prod = num1*num2 ;
  mod = num1%num2 ;
  div = (float) num1/num2 ;

  cout << "Sum = " << sum << endl;
  cout << "Difference = " << diff << endl;
  cout << "Product = " << prod << endl;
  cout << "Modulus = " << mod << endl;
  cout << "Division = " << div << endl;

  return 0;

}
