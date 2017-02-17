#include <iostream>
using namespace std;
int main() {
	int n;
	cout << "Enter a positive odd integer n that is less than 30: ";
	cin >> n;
	while (n<1 || n>30 || n%2==0) { 
		cout << "Incorrect, try again";
		cin >> n;
	}
	cout << "Diagram 1:" << endl;
	for (int r=1; r<=n; r++) {
		for (int c=1; c<=n; c++) {
			if ((r==c) || (r+c==n+1) || (r==(n+1)/2) || (c==(n+1)/2)) cout << "*";
			else cout << " ";
		}
		cout << endl;
	}
	cout << endl << endl << "Diagram 2:" << endl;
        int m=n/2;
        for (int r=1; r<=n; r++) {
                for (int c=1; c<=n; c++) {
                        if ((c==m&&r!=m+1) || (c==m+2&&r!=m+1) ||	// Columns 
			    (r==m&&c!=m+1) || (r==m+2&&c!=m+1) || 	// Rows
		            (r==m+1&&c==1) || (r==m+1&&c==n) ||   	// Left and Right points
                            (c==m+1&&r==1) || (c==m+1&&r==n))     	// Top and Bottom points
                             cout << "*";
                        else cout << " ";
                }
                cout << endl;
        }
        return 0;
}
