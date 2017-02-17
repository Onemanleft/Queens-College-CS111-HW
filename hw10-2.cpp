#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdlib>
using namespace std;

void dropDimension(int a[2][3], int r, int c, int x[]){
	int n=0;
	for (int i=0; i<r; i++){
		for (int j=0; j<c; j++){
			x[n]=a[i][j];
			n++;
		}
	}
}

int main() {
	int x[100];
	int y[2][3] = {{3,1,4}, {1,5,9}};
	int yrows = 2, ycols = 3;
	dropDimension(y, yrows, ycols, x);
	for (int i = 0; i <= 5; i++) cout << x[i];
	// 314159 is printed
	cout << endl;
return 0;
}

