#include<iostream>
using namespace std;
int main(){
	int first=58;
	int second=52;
	for(int i=0; i<=5; i++){
		cout << first << ", " << second << ", ";
		first-=12;
		second-=12;
	}
	return 0;
}