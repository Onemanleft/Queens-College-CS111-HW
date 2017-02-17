#include <iostream>
using namespace std;
int main() {
	int r;
	double p=3.14;
	cout << "What is the radius of the circle? ";
	cin >> r;
	cout << "The circumference of the circle is " << 2*p*r << endl;
	cout << "The area of the circle is " << p*(r*r) << endl;
	return 0;
}
