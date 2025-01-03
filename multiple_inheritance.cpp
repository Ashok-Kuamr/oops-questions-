#include <iostream>
using namespace std;

class A{
    private:
        int a =10;
    public:
        int b=20;
    protected:
        int c=30;
};

class B{
    private:
        int x =330;
    public:
        int y=220;
    protected:
        int cz=310;
    
};

class C:public A,public B{};

int main() {
  C ok1,ok2;
  cout<<ok1.b<<endl;
  cout<<ok2.y<<endl;
//   cout<<ok1.a;  // try also it (error)
//   cout<<ok1.c;  // try also it (error)

    return 0;
}