#include<iostream>
using namespace std;
int main(){
	int first=53;
	for(int i=0; i<=5; i++){
		cout << first << " " << first << " ";
		first-=13;
	}
	return 0;
}