#include <iostream>
using namespace std;

int main() {
    int n;
    
    // Taking array size input
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    
    // Taking array elements input
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Printing even numbers
    cout << "Even numbers in the array: ";
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    
    return 0;
}