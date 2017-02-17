#include <iostream>
using namespace std;
int main() {
	int q, d, n, c;
	cout << "How many quarters do you have? ";
	cin >> q;
	cout << "How many dimes do you have? ";
	cin >> d;
	cout << "How many nickels do you have? ";
	cin >> n;
	cout << "How many cents do you have? ";
	cin >> c;
	cout << "That makes " << ((q*25)+(d*10)+(n*5)+(c*1)) << " in change." << endl;
	return 0;
}
	
