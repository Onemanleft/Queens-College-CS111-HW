#include <iostream> 
using namespace std;
int main () {
	int x=0, y=0;
	while (x*x<=12000){
		x++;
	}
	cout << "The smallest integer n such that n^2 is greater than 12,000 is "<< x << endl;
	while (y*y*y<=12000){
		y++;
	}
	cout << "The largest integer n such that n^3 is less than 12,000 is " << y-1 << endl;
	return 0;
}
