#include <iostream>
using namespace std;

  class Demo
    {
      private:
          int a;
      protected:
          int b;
      public:
          int c;

         void set() 
         {
           a=10;
           b=20;
           c=30;
         }
           void show()

         {
           
           cout << a << " " << b << " " << c << endl ;
         
         }
    };
    
    class child:public Demo
    {
      public:
        // need to added 'public:' here ,
         void access()
      {
        // 'a' can't be added here coz declared pvt in Demo class 
        b=20;
        c=30;
      }
    };
    int main()
    {
      Demo d;
      d.set();
      d.show();
      
      // both 'a' and 'b' can't be used here as a is declared pvt and b is declared protected 

      d.c=30;

      cout << d.c << endl ;
  return 0;
  
  //return 0 can be added inside a class too // idk just why yet 

}
