#include <iostream>
using namespace std;

class add{
    private:
        int a,b;
    public:
        add(){
            cout<<"Enter a & b: ";
            cin>>a>>b;
        }
        
        void display(){
            cout<<"Value of a & b is: "<<a<<", "<<b<<endl;
        }
};

int main() {
    add ok;
    ok.display();
    
    return 0;
}