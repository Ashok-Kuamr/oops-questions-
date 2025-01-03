#include <iostream>
using namespace std;

class cube {
private:
    int side;

public:
    // Constructor using initializer list
    cube(int x) : side(x) {}

    // Getter function to access private member
    int getSide() const {
        return side;
    }
};

int main() {
    cube c1(10);
    cube c2(20);
    cube c3(30);

    // Accessing side using getter function
    cout << "Side is: " << c1.getSide() << endl;
    cout << "Side is: " << c2.getSide() << endl;
    cout << "Side is: " << c3.getSide() << endl;

    return 0;
}
