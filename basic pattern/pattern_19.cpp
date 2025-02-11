#include<iostream>
using namespace std;
int main(){

//1
//2 3
//4 5 6
//7 8 9 10
//11 12 13 14 15

int k=1;
for(int i=5;i>=1;i--)
	{
		for(int j=5;j>=i;j--)
		{
			cout<<k<<" ";
			k++;	
		}
		cout<<endl;
	}
	return 0;
}