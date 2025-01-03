#include <iostream>
using namespace std;

int main() {
    int *pa = new int;   // Dynamically allocate memory for an integer
    int *pb = new int;   // Dynamically allocate memory for another integer
    int *psum = new int; // Dynamically allocate memory for the sum

    cout << "Enter two integer values:" << endl;
    cin >> *pa >> *pb; // Read values into the dynamically allocated memory

    *psum = *pa + *pb; // Calculate the sum and store it in the allocated memory

    cout << "Sum is: " << *psum << endl;

    // Free the dynamically allocated memory
    delete pa;
    delete pb;
    delete psum;

    return 0;
}
