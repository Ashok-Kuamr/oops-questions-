#include <iostream>
using namespace std;

class MyClass {
    private:
        int a;
        int b;
        
    public:
        void getdata() {
            cout << "Enter a: " << endl;
            cin >> a;
            
            cout << "Enter b: " << endl;
            cin >> b;
        }
        
        void display() {
            cout << "Sum is: " << a + b << endl;
        }
};

int main() {
    MyClass ok;  // Renamed class and removed redundant 'class' keyword
    ok.getdata();
    ok.display();

    return 0;
}
