#include <iostream>
using namespace std;

//�����
class Circle {
public:
	int radius;
	double getArea();
	Circle();
	Circle(int r);
};

//������
Circle::Circle():Circle(1){ }	//������ Circle(int r)�� ������ ȣ��

Circle::Circle(int r) {
	radius = r;
	cout << "�ʱ�ȭ �� ��������" << radius << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}



int main() {
	Circle donut;	//���� ��ü
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ������ " << area << endl;

	Circle pizza(10);	//���� ��ü
	area = pizza.getArea();
	cout << "pizza ������ " << area << endl;

}