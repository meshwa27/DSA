#include<iostream>

using namespace std;

int main()
{
    // WAP to perform addition of two 1D arrays and store it into another 1D array.
    
    int n;
    cout << "Enter the value of n: ";
    cin  >> n;
    
    int array1[n], array2[n], sum[n];

    cout << "First Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for array1[" << i << "]: "; 
        cin >> array1[i];      
    }
    cout << endl;
    
    cout << "Second Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value for array2[" << i << "]: "; 
        cin >> array2[i];      
    } 
    cout << endl;
    
    for (int i = 0; i < n; i++)
    {
        sum[i] = array1[i] + array2[i];
    }

    cout << "Sum of Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "sum[" << i << "] = " << sum[i] << endl;
    }

    return 0;
}