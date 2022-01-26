#include <iostream>
using namespace std;

int main() {
	int num = 0;
	cout << "Enter Number:- ";
	cin >> num;
	if (num % 2)
		cout << "ODD Number" << endl;
	else
		cout << "EVEN Number" << endl;
}