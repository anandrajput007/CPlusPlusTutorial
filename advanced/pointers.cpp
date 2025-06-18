#include <iostream>
using namespace std;

int main() {
    int x = 42;
    int* ptr = &x;

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer points to: " << ptr << endl;
    cout << "Value at pointer: " << *ptr << endl;

    *ptr = 100;  // Changing value using pointer
    cout << "New value of x: " << x << endl;

    return 0;
}
