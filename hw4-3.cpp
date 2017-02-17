#include <iostream>
using namespace std;
int main() {
	int positive=0;
	int negative=0;
	int counter=0; 
	int total=0; 
	int n;
	cout << "Enter an integer, the input ends if it is 0: ";
	cin >> n;
	while (n!=0) {
		if (n>0) 
		positive++;
			else if (n<0)
			negative++;
			total=total+n;
			counter++;
			cin >> n;
	}
	cout << "The number of positives is " << positive << "." << endl;
	cout << "The number of negatives is " << negative << "." << endl;
	cout << "The total is " << total << "." << endl;
	cout << "The average is " << (total*1.0)/counter << "." << endl;
	return 0;
}
