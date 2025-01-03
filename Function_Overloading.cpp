#include <iostream>
using namespace std;

class ar {
public:
    void area(int a, int b, int c) {
        cout << "The area of the cuboid is: " << 2 * (a * b + b * c + c * a) << endl;
    }
    
    void area(int x, int y) {
        cout << "The area of the rectangle is: " << x * y << endl;
    }
    
    void area(float r) {
        cout << "The area of the circle is: " << 3.14 * r * r << endl;
    }
};

int main() {
    ar ok;
    ok.area(2, 3);        // Calls the rectangle area method
    ok.area(2, 2, 2);     // Calls the cuboid area method
    ok.area(2.0f);        // Calls the circle area method
    return 0;
}
