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
        
        friend complex operator+(complex c1, complex c2);
        
};


        complex operator+(complex c1, complex c2){
            complex temp;
            temp.real = c1.real+c2.real;
            temp.imag = c1.imag+c2.imag;
            return temp;
        }

int main() {
    complex c1,c2,c3;
    c1.getvalue(1,2);
    c2.getvalue(3,4);
    c3 = c1+c2;
    c3.setvalue();
   
    return 0;
}