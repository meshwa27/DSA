#include<iostream>
using namespace std;
int main(){
		
	for(char i='A';i<='E';i++)
	{
		for(char k=i;k<'E';k++)
		{
			cout<<" ";
		}
		for(char j='A';j<=i;j++)
		{
			cout<<j;
		}
		cout<<endl;
	}

	return 0;
}
