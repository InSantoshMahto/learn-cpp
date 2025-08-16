#include <iostream>
using namespace std;
int main()
{
	cout << "Count Number of Consecutive Inputs" << endl;
	uint currVal = 0, val = 0;
	if (cin >> currVal) {
		uint count = 1;
		while (cin >> val) {
			if (val == currVal) {
				++count;
			} else {
				cout << currVal << " occurs " << count << " times." << endl;
				currVal = val;
				count = 1;
			}
			// To break this loop, you can use 'break;' statement
			// or input EOF (Ctrl+D on Unix/Linux/Mac or Ctrl+Z on Windows)
			// or redirect input from a file that ends
		}
		cout << currVal << " occurs " << count << " times." << endl;
	}
	return 0;
}
