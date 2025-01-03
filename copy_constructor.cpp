#include <iostream>
using namespace std;

class example {
private:
    int a, b;

public:
    // Parameterized constructor
    example(int x, int y) {
        cout << "Constructor called:" << endl;
        a = x;
        b = y;
    }

    // Copy constructor
    example(const example &e) {
        cout << "Copy constructor called:" << endl;
        a = e.a;
        b = e.b;
    }

    // Display method
    void display() {
        cout << "Values are: " << a << " " << b << endl;
    }
};

int main() {
    // Correct object creation with two integers
    example ok1(10, 20);
    
    // Copy constructor invocation
    example ok2 = ok1;

    // Display values
    ok1.display();
    ok2.display();

    return 0;
}
