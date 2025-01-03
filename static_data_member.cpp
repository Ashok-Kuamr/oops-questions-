// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class A{
    public:
        static int a;
        int modified(){
            a=10;
            return a;
        }
};

int A::a=0;

int main() {
    A ok1,ok2;
    ok1.modified();
    cout<<ok1.a<<endl;
    cout<<ok2.a<<endl;
    

    return 0;
}