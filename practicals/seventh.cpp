#include <iostream>
using namespace std;

int main(){

  int sum,diff,prod,mod;
  float div;

  int num1,num2;
  char op;

  cout << "enter first number:" ;
  cin >> num1;

  cout << "enter second number:" ;
  cin >> num2;

  sum=num1+num2;
  diff=num1-num2;
  prod=num1*num2;
  div=float(num1/num2);
  mod=num1%num2;

  cout << "enter operator:" ;
  cin >> op ;

  switch(op)
  {
    case '+':
      cout << "Result:" << sum ;
      break;

    case '-':
      cout << "Result:" << diff ;
      break;

    case '*':
      cout << "Result:" << prod ;
      break;

    case '/':
      cout << "Result:" << div ;
      break;

    case '%':
      cout << "Result:" << mod ;
      break;

    default:
      cout << "Invalid Operator" ;
      break;
  }
  return 0;
}
