#include <iostream>
using namespace std;

int main() {
    int num = 8;  // First term
    int multiplier = 1, decrement = 2;

    for (int i = 1; i <=10; i++) {  // Loop to find the 6th term
   		 cout<< num <<", ";
        num = (num * multiplier) - decrement;
        multiplier++;
        decrement++;
    }

    return 0;
}
