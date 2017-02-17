#include <iostream>
using namespace std;
int main() {
	int n, counter=0;
	cout << "Please enter an integer less than 10: ";
	cin >> n;
	if (n<1 || n>9)
		return 0;
	else 
		cout << "Multiples of " << n << " under 100 with " << n << " numbers/line" << endl;
	for (int i=1; i<=100; i++) {
		if (i%n==0) {
			cout << i << " "; 
			counter++;
				if (counter%n==0) 
				cout << endl;
		}
	}
	return 0;
}

