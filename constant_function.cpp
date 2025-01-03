#include <iostream>
using namespace std;

class A{
    public:
        const float pi=3.14;
        int r =2;
        float ar;
        
        int area(){
            ar = pi*r*r;
            return ar;
        }
};

int main() {
    A ok;
    ok.area();
    cout<<ok.ar;

    return 0;
}