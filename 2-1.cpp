#include <iostream>
#include <cstring>
using namespace std;

int main() {

	cout << "문자들을 입력하세요(500개 미만).\n";

	char text[500];
	cin.getline(text, 500, '\n');

	int count = 0;
	int size = strlen(text);

	for (int i = 0; i < size; i++) {
		if (text[i] == 'a') {
			count++;
		}
	}

	cout << "a의 개수는 " << count << endl;
	return 0;
}
