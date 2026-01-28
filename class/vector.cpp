#include <iostream>
#include <vector>
using namespace std;
int main()
{
  vector <int> v = {10,20,30};

  cout << v.size() << endl ;
  cout << v.capacity() << endl ;

  v.push_back(40);

  cout << v.size() << endl ;
  cout << v.capacity() << endl ;

  return 0;
}
