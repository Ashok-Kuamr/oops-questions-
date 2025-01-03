#include <iostream>
using namespace std;

struct student{
    string name;
    int age;
    float rollno;
};

int main() {
    int nums;
    cout<<"Enter no. of students:";
    cin>>nums;
    
    student std[nums];
    for(int i=0;i<nums;i++){
        cout<<"Student"<<i+1<<endl;
        cin.ignore();
        
        cout<<"Enter Name:";
        getline(cin, std[i].name);
        
        cout<<"Enter Age:";
        cin>>std[i].age;
        
        cout<<"Enter Roll No.:";
        cin>>std[i].rollno;
    }
    
    cout<<"Details of students are:"<<endl;
    
    for(int i=0; i<nums; i++)
    {
        cout<<"The details of students"<<i+1 <<"are"<<endl;
        cout<<"Name:"<<std[i].name<<endl;
        cout<<"Age:"<<std[i].age<<endl;
        cout<<"Roll No.:"<<std[i].rollno<<endl;
    }
    
    return 0;
}