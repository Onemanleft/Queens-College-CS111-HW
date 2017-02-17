#include <iostream>
using namespace std;
int main() {
	int n, x, y, z;
	cout << "Please input 3-digit positive integer. ";
	cin >> n;
	if (n < 100 || n > 999) {
		cout << "Error" << endl;
	}	
	else {
		x=n/100;
		n=n%100;
		y=n/10;
		n=n%10;
		z=n/1;
		n=((x*100)+(y*10)+(z*1));
		cout << "The sum of all digits in " << n << " is " << (x+y+z) << "." << endl;
	}
	return 0;
}
		
