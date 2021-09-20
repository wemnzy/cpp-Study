#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char password[11];

	while (true) {
		cout << "종료하고싶으면 yes를 입력하세요>>";
		cin.getline(password, 10, '\n');


		if (strcmp(password, "yes") == 0) {
			cout << "종료합니다..." << endl;
			break;
		}

		else
			continue;
	}
}