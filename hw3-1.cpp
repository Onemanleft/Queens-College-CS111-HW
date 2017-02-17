#include <iostream>
using namespace std;
int main() {
	double savings, expenses;
	cout << "savings: ";
	cin >> savings;
	cout << "expenses: "; 
	cin >> expenses;
	if (savings >= expenses) {
		cout << "savings = " << (savings - expenses) << endl << "expenses = 0.0" << endl
		<< "Solvent" << endl;
	} 
	else {
		cout << "Bankrupt" << endl;
	}
	return 0;
}	  
