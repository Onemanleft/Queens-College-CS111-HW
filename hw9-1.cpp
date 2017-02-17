#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int findMax(int a[], int c) {
	int ans=a[0];
	for(int i=0; i<c; i++) {
		if (a[i]>ans) ans=a[i];
	}
	return ans;
} 

int findMin(int a[], int c) {
        int ans=a[0];
        for(int i=0; i<c; i++) {
                if (a[i]<ans) ans=a[i];
        }
        return ans;
}

double findAverage(int a[], int c) {
        double ans;
	int total=0;
        for(int i=0; i<c; i++)
		total+=a[i];
	ans=(double)total/c;
        return ans;
}

int findMinGap(int a[], int c) { 
	int gap=0; 
	int min=abs(a[0]-a[1]); 
	for (int i=0; i<c-2; i++) { 
		gap=abs(a[i]-a[i+1]); 
		if (gap<min) min=gap; 
	} 
	return min; 
}

int findGapSum(int a[], int c) {
        int sum=0;
        for (int i=0; i<c-2; i++) {
		sum+=abs(a[i]-a[i+1]);
        }
        return sum;
}       

int main() {
        int array[20];
        srand (time(NULL));
        for (int i=0; i<20; i++) {
        	array[i]=rand()%41+60;
	}
	cout << findMax(array, 20) << endl;
	cout << findMin(array, 20) << endl;
	cout << findAverage(array, 20) << endl;
	cout << findMinGap(array, 20) << endl;
	cout << findGapSum(array, 20) << endl;
	return 0;
}
	

