#include <iostream>
using namespace std;

class A{
    public: 
        int a,b;
        template<class T>T greater(T a,T b){
            if(a>b)
            return a;
            else
            return b;
        }};

int main() {
    A ok;
    cout<<ok.greater<int>(3,5)<<endl;
    cout<<ok.greater<double>(3.6,5)<<endl;
    cout<<ok.greater<char>('a','v')<<endl;


    return 0;
}