#include <iostream>
#include <cstring>
using namespace std;

int main() {

	char password[11];

	while (true) {
		cout << "�����ϰ������ yes�� �Է��ϼ���>>";
		cin.getline(password, 10, '\n');


		if (strcmp(password, "yes") == 0) {
			cout << "�����մϴ�..." << endl;
			break;
		}

		else
			continue;
	}
}