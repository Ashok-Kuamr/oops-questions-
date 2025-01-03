#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    // Constructor to initialize real and imaginary parts
    Complex(int r, int i) : real(r), imag(i) {}

    // Function to display the complex number
    void display() {
        cout << "Real part: " << real << ", Imaginary part: " << imag << endl;
    }

    // Overloading the unary - operator
    Complex operator-() {
        Complex temp(-real, -imag);  // Negate both real and imaginary parts
        return temp;
    }
};

int main() {
    Complex c1(3, 4);  // Complex number 3 + 4i
    cout << "Original complex number: ";
    c1.display();

    Complex c2 = -c1;  // Using the overloaded unary - operator
    cout << "Negated complex number: ";
    c2.display();

    return 0;
}
