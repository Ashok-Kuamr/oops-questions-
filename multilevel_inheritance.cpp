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

class B:public A{
};

class C:public B{};

int main() {
  C ok;
  cout<<ok.b;
//   cout<<ok.a;  // try it also  (error)
//   cout<<ok.c;  // try it also  (error)

    return 0;
}