#include <iostream>
using namespace std;

class Student {
private:
    int age;
    string name;
    int rollno;

public:
    // Default constructor
    Student() {
        age = 20;
        name = "Ashok";
        rollno = 11;
    }

    // Parameterized constructor with all three fields
    Student(int a, string x, int r) {
        age = a;
        name = x;
        rollno = r;
    }

    // Parameterized constructor with only age and name
    Student(int p, string k) {
        age = p;
        name = k;
        // rollno = -1; // Default value for rollno
    }

    // Display method
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No.: " << rollno << endl;
    }
};

int main() {
    Student ok1;
    Student ok2(20, "Ashok", 191);
    Student ok3(30, "Ram");

    ok1.display();
    ok2.display();
    ok3.display();

    return 0;
}
