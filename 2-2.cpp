#include <iostream>
using namespace std;

int main() {

	int num;	

	while (true) {
		cout << "����� ������(����)�� �Է��ϼ��� >>";
		cin >> num;

		if (num > 0) {
			for (int i = 1; i <= 9; i++) {
				cout << num << "x" << i << " = " << num * i << endl;
			}
		}

		else {
			cout << "������ ����� �����մϴ�.\n";
			break;
		}
	}
}


