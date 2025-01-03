#include <iostream>
using namespace std;

class A{
    public:
        virtual void show(){
            cout<<"base"<<endl;
        }
        
        virtual void display(){
            cout<<"Ashok"<<endl;
        }
};

class B:public A{
    public:
        virtual void show(){
            cout<<"Hello"<<endl;
        }
        virtual void display(){
            cout<<"Hii"<<endl;
        }
};

int main() {
    A a, *aptr;
    B b, *bptr;
    aptr = &b;
    // bptr= &a;
    // aptr = &a;           //also try commented code
    // bptr = &b;
    aptr->show();
    aptr->display();
    a.show();
    // b.show();
    // a.display();
    b.display();
    

    return 0;
}