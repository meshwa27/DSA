#include <iostream>

using namespace std;

// wap to get and print rxc 2D array.
	
int main() 
{

    int k, l;

    cout << "Enter rows and columns (k l): ";
    cin >> k >> l;

    int array[k][l]; 

    for (int i = 0; i < k; i++) 
	{
        for (int j = 0; j < l; j++) 
		{
            cout << "Enter array[" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "Array is:" << endl;
    for (int i = 0; i < k; i++) 
	{
        for (int j = 0; j < l; j++) 
		{
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}