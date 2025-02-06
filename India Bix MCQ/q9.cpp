#include<iostream>
using namespace std;
int main(){
	int first=8;
	int second=22;
	for(int i=0; i<=10; i++){
		cout << first << ", " << second << ", ";
		second+=6;
	}
	return 0;
}