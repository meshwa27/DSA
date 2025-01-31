#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter your age :";
	cin >> age;
	if(age==0 || age>=100){
		cout << "Please enter valid age !";
	}
	else if(age<0){
		cout << "Your entered age is not valid" << endl;
		cout << "so please enter valid age !";
	}
	else if(age<18){
		cout << "You are not eligible for vote !";
	}
	else if(age>=18 && age <100){
		cout << "You are eligible for vote !";
	}
	else{
		cout << "You are note accepted !";
	}
	return 0;
}