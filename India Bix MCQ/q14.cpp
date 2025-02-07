// 201, 202, 204, 207, ...
#include<iostream>
using namespace std;
int main(){
	int num=201;
	for(int i=1; i<=10; i++){
		cout << num << ", ";
		num=num+i;
	}
	return 0;
}
