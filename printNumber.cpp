// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int arr[]={2,4,5,6,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "Size - " << size;
    for(int i=0;i<=size;i++)
    {
        cout<< i<<endl;
    }
    return 0;
}