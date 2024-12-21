#include <iostream>
using namespace std;

const double exactNum = 3.23;

double fX(double x) {
	return (((3 * x) - (4 * log(x))) - 5);
}

double findX(double left, double right) {
	return (left + right) / 2;
}

double func(double left, double right) {
	if (round(left * 1000) / 1000 == exactNum || round(right * 1000) / 1000 == exactNum) {
		cout << "end" << endl;
		return 0;
	}
	double newX = findX(left, right);
	cout << "New x is " << newX << endl;
	if ((fX(left) * fX(newX)) < 0) {
		return func(left, newX);
	}
	if ((fX(newX) * fX(right)) < 0) {
		return func(newX, right);
	}
}

int main() {
	func(2, 4);
	system("pause");
	return 0;
}

