#include<iostream>
using namespace std;

int main()
{
// 2, 6, 18, 54, ...

	int first=2;
	
	
	for(int i=0;i<=10;i++)
	{
			cout << first << ", ";
			first*=3;
			
	}


	
	return 0;
}