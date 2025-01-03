#include <iostream>
using namespace std;

class MyClass {
    private:
        int a;
        int b;
        
    public:
       void getdata(); // Declare methods
       void display();
};

// Correctly defining methods outside the class
void MyClass::getdata() {
    cout << "Enter a: " << endl;
    cin >> a;
            
    cout << "Enter b: " << endl;
    cin >> b;
}
       
void MyClass::display() {
    cout << "Sum is: " << a + b << endl;
}

int main() {
    MyClass ok;  
    ok.getdata();
    ok.display();

    return 0;
}
