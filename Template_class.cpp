#include <iostream>
using namespace std;

template<class T>
class adder{
    private:
        T value1;
        T value2;
    public:
        adder(T v1, T v2):value1(v1),value2(v2){}
        
        T add(){
            return value1 +value2;
        }
};

int main() {
    adder<int>int_adder(10,20);
    cout<<"Sum of integer:"<<int_adder.add()<<endl;
    adder<double>double_adder(5.5,43.52);
    cout<<"Sum of double:"<<double_adder.add()<<endl;
    return 0;
}