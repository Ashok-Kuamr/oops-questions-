#include <iostream>
using namespace std;

// Forward declarations
class ClassA;
class ClassB;

class ClassC {
public:
    // A member function of ClassC that will be a friend of ClassA and ClassB
    void accessFriendData(ClassA& a, ClassB& b);
};

class ClassA {
private:
    int dataA;

public:
    ClassA(int val) : dataA(val) {}

    // Declare ClassC's member function as a friend
    friend void ClassC::accessFriendData(ClassA& a, ClassB& b);
};

class ClassB {
private:
    int dataB;

public:
    ClassB(int val) : dataB(val) {}

    // Declare ClassC's member function as a friend
    friend void ClassC::accessFriendData(ClassA& a, ClassB& b);
};

// Definition of the member function of ClassC
void ClassC::accessFriendData(ClassA& a, ClassB& b) {
    cout << "Accessing private data:" << endl;
    cout << "ClassA's data: " << a.dataA << endl;
    cout << "ClassB's data: " << b.dataB << endl;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);
    ClassC objC;

    objC.accessFriendData(objA, objB);

    return 0;
}
