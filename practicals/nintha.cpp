#include <iostream>
using namespace std;

class Student {
    public:
        int roll;
    
    // This function is defined inside the class, making it an Inline Function by default [6]
    void display() {
        cout << "Roll No: " << roll << endl;
    }
};

int main() {
    Student s1;
    s1.roll = 101;
    s1.display();
    return 0;
}
