// Even Fibonacci numbers

#include <iostream>
using namespace std;

#define MAX 4000000

int main() {
        // 1 + 1 = 2, 1 + 2 = 3, 2 + 3 = 5, 3 + 5 = 8, 5 + 8 = 13, 8 + 13 = 21, 13 + 21 = 34, 21 + 34 = 55, 34 + 55 = 89

    	int a = 1;		// first term
    	int b = 2;		// second term
    	int c;			// next term
    	int sum = 0;

    	while(a < MAX) {
		if (a % 2 == 0) {
			sum = sum + a;
		}
        	c = a + b;
        	a = b;
        	b = c;
    	}

    	cout << sum << endl;
}
