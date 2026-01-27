#include <iostream>
using namespace std;

int main()
{
  int a,b,c;

  cout << "Enter first number :" ;
  cin >> a ;

  cout << "Enter Second number :" ;
  cin >> b ;

  cout << "Enter Third number :" ;
  cin >> c ;

  if(a>=b && a>=c)
    cout << "Greatest no. is " << a ;

  else if(b>=a && b>=c)
    cout << "Greatest no. is " << b ;

  else 
    cout << "Greatest no. is " << c ;

  return 0;

}
