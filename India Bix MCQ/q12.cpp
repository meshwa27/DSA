//14, 28, 20, 40, 32, 64, ...
#include<iostream>
using namespace std;
int main(){
	int fnum=14;
	for(int i=0; i<=10; i++){
		cout << fnum << ", ";
		if(i%2==0){
			fnum*=2;
		}else{
			fnum-=8;
		}
	}
	return 0;
}
