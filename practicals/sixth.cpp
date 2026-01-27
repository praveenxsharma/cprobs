#include <iostream>
using namespace std;

int main()
{
  char ch;

  cout << "Enter Character to check : " ;
  cin >> ch ;

  switch(ch)
  {
    case'a':case'e':case'i':case'o':case'u':case'A':case'E':case'I':case'O':case'U':

      cout << "Character is Vowel" ;
      break;

    default:
            cout << "Character is a consonant" ;
  }
   return 0;
}
