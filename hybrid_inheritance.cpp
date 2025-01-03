#include <iostream>
using namespace std;

class A {
private:
    int a = 10; // Private member, inaccessible outside the class
public:
    int b = 20; // Public member, accessible in derived classes and outside
protected:
    int c = 30; // Protected member, accessible in derived classes
};

// Use virtual inheritance to avoid ambiguity
class B : virtual public A {};
class C : virtual public A {};
class D : public B, public C {};

int main() {
    D ok1;

    // Accessing public member of A through D
    cout << "Value of b: " << ok1.b << endl;

    return 0;
}
