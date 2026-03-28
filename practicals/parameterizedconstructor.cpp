#include <iostream>
using namespace std;

class student {
  public:
            
        int age ;
        int marks ;

        student(int a,int m) {

               age = a ;
               marks = m ;

                 
         }

};

int main() {
   
     int age,marks;  

    cin >> age >> marks ;
    
    student A(age,marks);

    cout << A.age << endl ;
    cout << A.marks << endl ;

    return 0;
}  
