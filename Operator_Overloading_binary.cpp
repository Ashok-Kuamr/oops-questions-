#include <iostream>
using namespace std;

class complex{
    public:
        int real, imag;
        
        void getvalue(int a, int b){
            real =a;
            imag =b;
        }
        
        void setvalue(){
            cout<<real<<endl;
            cout<<imag<<endl;
        }
        
        complex operator+(complex c1){
            complex temp;
            temp.real = real+c1.real;
            temp.imag = imag+c1.imag;
            return temp;
        }
        
};


int main() {
    complex c1,c2,c3;
    c1.getvalue(1,2);
    c2.getvalue(3,4);
    c3 = c1+c2;
    c3.setvalue();
   
    return 0;
}