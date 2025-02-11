#include<iostream>
using namespace std;
int main(){

//A
//B C
//D E F
//G H I J
//K L M N O	

char z='A';
for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<z<<" ";
			z++;	
		}
		cout<<endl;
	}
	return 0;
}