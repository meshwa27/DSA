#include<iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter a number :";
	cin >> num;
	if(num==0){
		cout << "This number is neutral !";
	}
	else if(num>0){
		cout << "This num is positive !";
	}
	else if(num<0){
		cout << "This num is negative";
	}
	return 0;
}