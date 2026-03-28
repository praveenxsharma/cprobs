#include <iostream>
using namespace std ;

class area {
  public:
            
        int length ;
        int breadth ;

        area(int a,int m) {

               length = a ;
               breadth = m ;

                 
         }

};

int main() {
   
     int length,breadth;

     cout << "Enter length:" << endl ;
     cin >> length ;

     cout << "Enter breadth:" << endl ;
     cin >> breadth ;
    
    area A(length,breadth);

    cout << A.length*A.breadth << endl;

    return 0;
}  
