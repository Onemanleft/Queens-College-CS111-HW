#include <iostream>
using namespace std;
int main() {
	int n, product=1;
	cout << "Please enter integer n: ";
	cin >> n;
	if (n<1 || n>9) 
		return 0;
	else 
		cout << "Exponential Power " << n << " ^ " << n << endl;
	for (int i=1; i<=n; i++) {
		product*=n;
		cout << n << " ^ " << i << " = " << product << endl;
	}
	return 0;
}
	
	
