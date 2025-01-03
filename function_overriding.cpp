#include <iostream>
using namespace std;

class A{
    public:
        void show(){
            cout<<"base"<<endl;
        }
        
        void display(){
            cout<<"Ashok"<<endl;
        }
};

class B:public A{
    public:
        void show(){
            cout<<"Hello"<<endl;
        }
        void display(){
            cout<<"Hii"<<endl;
        }
};

int main() {
    A a;
    B b; 
    a.show();
    // b.show();
    // a.display();
    b.display();
    

    return 0;
}