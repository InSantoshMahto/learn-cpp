#include <iostream>
using namespace std;

int main () {
	int num = 0;
	cout << "Enter Number:- ";
	cin >> num;
	if (num % 2) {
		cout << "ODD Number:- "<< num << endl;
	} else {
		cout << "EVEN Number:- "<< num << endl;
	}
	return 0;
}