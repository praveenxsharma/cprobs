#include <iostream>
using namespace std;

int main() {
    int var = 20;
    // Pointer declaration: a derived data type [11]
    int *ptr; 
    ptr = &var; 

    cout << "Value of var: " << var << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Value accessed via ptr: " << *ptr << endl;
    
    return 0;
}
