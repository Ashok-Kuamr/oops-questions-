#include <iostream>
using namespace std;

class A {
public:
    static int a; // Static member
    int b = 11;   // Non-static member
    
    static int show() {
        // return b; // Error: Static function cannot access non-static members
        return a;   // Correct: Static member function can access static members
    }
};

// Proper initialization of static member
int A::a = 10;

int main() {
    A a1;
    cout << "Static member a: " << a1.show() << endl; // Accessing static member through the function
    cout << "Non-static member b: " << a1.b << endl; // Accessing non-static member
    
    return 0;
}
