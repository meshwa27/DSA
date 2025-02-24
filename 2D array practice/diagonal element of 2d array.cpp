#include <iostream>
// sum of diagonal element of 2d array.
using namespace std;

int main() 
{
    int x, y;

    cout << "Enter rows and columns: ";
    cin >> x >> y;

    int arr[x][y];
    int sum=0;
    int k=1;


    for (int i = 0; i < x; i++) 
	{
        for (int j = 0; j < y; j++) 
		{
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
        cout << endl;
    }
    
    for (int i = 0; i < x; i++)
    {
    	for(int j = 0; j<y; j++)
    	{
    		k++;
   		    if(i==j)
    		{
    			sum = sum + arr[i][j];
			}
		}
	} 
	cout <<sum; 
    
}