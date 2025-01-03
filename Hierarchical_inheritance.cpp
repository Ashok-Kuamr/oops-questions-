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

class B:public A{};

class C:public A{};

int main() {
  B ok1;
  C ok2;
  cout<<ok1.b<<endl;
  cout<<ok2.b<<endl;
  

    return 0;
}