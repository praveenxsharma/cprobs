#include <iostream>
using namespace std;

int main(){

  int maxvalue;
  cout<<"enter max value:";
  cin>>maxvalue;

  cout<<"even numbers between 0 and "<<maxvalue<<" are:"<<endl;

  for(int i=1;i<=maxvalue;i++){
    if(i%2==0){
      cout<<i<<" ";

    }
  }
  return 0;
}
