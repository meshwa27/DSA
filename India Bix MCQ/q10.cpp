#include<iostream>
using namespace std;
int main(){
	int first=31;
	int second=29;
	for(int i=0; i<=10; i++){
		cout << first << ", " << second << ", ";
		first-=7;
		second-=7;
	}
	return 0;
}