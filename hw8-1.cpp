#include <iostream>
using namespace std;

int bigDown(int x) {
	if (x<5) return x;
	if (x<10) return x-1;
	return bigDown(x%10) + bigDown(x/10) * 10;
}

int even(int x) {
	if (x==0) return 0;
	if (x%2==1) return even(x/10);
	return x%10 + 10 * even(x/10);
}

int useRecursion(int x) {
	if (x<10) return x;
	if (x<100) return ((x/10) + (x%10));
	return useRecursion(x/10);
}

int main() {
	cout << bigDown(10) << endl; // prints 10
	cout << bigDown(2654) << endl; // prints 2544
	cout << bigDown(19683) << endl; // prints 18573
	cout << even(16) << endl; // prints 6
	cout << even(666) << endl; // prints 666
	cout << even(777) << endl; // prints 0
	cout << useRecursion(567982) << endl; //prints 11
	cout << useRecursion(107982) << endl; //prints 1
	cout << useRecursion(7) << endl; //prints 7
return 0;
}
