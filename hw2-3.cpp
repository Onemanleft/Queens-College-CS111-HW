#include <iostream>
using namespace std;
int main() {
	double h, a, b;
	cout << "What is the height of the trapezoid? ";
	cin >> h;
	cout << "What is the base 1 of the trapezoid? ";
	cin >> a;
	cout << "What is the base 2 of the trapezoid? ";
	cin >> b;
	cout << "The area of the trapezoid is: " << (0.5*h)*(a+b) << endl;
	return 0;
}
