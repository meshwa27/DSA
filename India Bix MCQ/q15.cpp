#include<iostream>
using namespace std;

int main()
{
//544, 509, 474, 439, ...

	int first=544;
	
	for(int i=0;i<=10;i++)
	{
			cout << first << ", ";
			first-=35;
	}


	
	return 0;
}