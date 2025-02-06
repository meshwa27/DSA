#include<iostream>
using namespace std;
int main ()
{
	int n = 2;
	cout << "2" << " "<< "1" << " ";
	
	for(int i=0;i<=10;i++)
	{
		cout << "1/" << n << " ";
		n*=2;
	}
}