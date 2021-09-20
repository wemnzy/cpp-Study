#include <iostream>
using namespace std;

int main() {
	
	for (int i = 0; i < 4; i++) {

		for (int n = 0; n <= i; n++) {
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}