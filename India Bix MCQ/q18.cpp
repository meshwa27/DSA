#include<iostream>
using namespace std;

int main()
{
//  5.2, 4.8, 4.4, 4, ... 

	float first=5.2;
	
	
	for(int i=0;i<=10;i++)
	{
			cout << first << ", ";
			first-=0.4;
			
	}


	
	return 0;
}