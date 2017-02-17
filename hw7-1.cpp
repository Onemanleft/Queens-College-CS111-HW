#include <iostream>
using namespace std;

int biggestDigit(int x) {
	int d, max=0;
	while (x>0) {
		d=x%10;
		if (d>max) 
			max=d;
			x=x/10;
	}
	return max;
}

         
void anyPrime(int x) {
        for (int n=2; n<=x; n++) {
                int counter=0;
                for (int i=2; i<n; i++) {
                        if(n%i==0) {
                                counter++;
                        }
                }
                        if (counter==0)
			cout << n << " ";
        }
}

bool isPrime(int x) {
	for (int i=2; i<x; i++) {
        if(x%i==0)
		return false;
	}
        return true;
}

int main() {
	int x;
	bool y;
	cout << "Enter a positive integer x greater than 1000: ";
	cin >> x;
	while (x<=1000) {
		cout << "Invalid, enter a positive integer x greater than 1000: ";
		cin >> x;
	}
	cout << "The biggest digit in " << x << " is: " << biggestDigit(x) << endl;
	y=isPrime(x);
	if (y==true) cout << x << " is a prime number: True" << endl;
	else cout << x << " is a prime number: False" << endl;
	cout << "The prime numbers from 1 to 100 are: ";
	anyPrime(100);
	cout << endl;
	return 0;
}	
