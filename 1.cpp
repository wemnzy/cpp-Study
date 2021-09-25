#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	double getArea();
	Circle();
};

Circle::Circle() {
	radius = 1;
}

double Circle::getArea() {
	return 3.14*radius*radius;
}

int main() {
	Circle donut;
	donut.radius = 1;
	double area = donut.getArea();
	cout << "donut ¸éÀûÀº " << area << endl;
}