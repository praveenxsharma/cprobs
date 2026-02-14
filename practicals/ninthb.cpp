#include <iostream>
using namespace std;

class Box {
    private:
        int length; // Private member [8]
    public:
        Box() { length = 0; }
        // Friend function declaration
        friend void printLength(Box b); 
};

// Friend function definition
void printLength(Box b) {
    // Accessing private member 'length' is allowed here because of 'friend' keyword
    b.length = 10; 
    cout << "Length of box: " << b.length << endl;
}

int main() {
    Box b;
    printLength(b);
    return 0;
}
