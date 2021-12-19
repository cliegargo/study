// twiblr


#include <iostream>
using namespace std;

int extraUsersFollow(int A, int B) {
	return ((2 * (A)+ 100) - B);
}

int main() {
	int A, B;

	cin >> A >> B;

	int twiblr = extraUsersFollow(A, B);
	cout << twiblr << endl;

	return 0;
}
