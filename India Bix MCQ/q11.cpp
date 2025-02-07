#include<iostream>
using namespace std;

int main()
{
	
//	1.5, 2.3, 3.1, 3.9

	float first=1.5;
	
	for(int i=0;i<=10;i++)
	{
			cout << first << ", ";
			first+=0.8;
	}
	return 0;
}