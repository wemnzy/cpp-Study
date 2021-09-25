#include <iostream>
using namespace std;

//선언부
class Circle {
public:
	int radius;
	double getArea();
	Circle();
	Circle(int r);
};

//구현부
Circle::Circle():Circle(1){ }	//생성자 Circle(int r)의 생성자 호출

Circle::Circle(int r) {
	radius = r;
	cout << "초기화 된 반지름은" << radius << endl;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}



int main() {
	Circle donut;	//도넛 객체
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut 면적은 " << area << endl;

	Circle pizza(10);	//피자 객체
	area = pizza.getArea();
	cout << "pizza 면적은 " << area << endl;

}