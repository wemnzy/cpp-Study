#include <iostream>
#include <cstring>
using namespace std;

int main() {

	cout << "���ڵ��� �Է��ϼ���(500�� �̸�).\n";

	char text[500];
	cin.getline(text, 500, '\n');

	int count = 0;
	int size = strlen(text);

	for (int i = 0; i < size; i++) {
		if (text[i] == 'a') {
			count++;
		}
	}

	cout << "a�� ������ " << count << endl;
	return 0;
}
