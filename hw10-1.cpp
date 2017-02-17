#include <iostream>
#include <ctime>
#include <ctime>
#include <cstdlib>
using namespace std;

void maximum(int a[][30], int r, int c){
	for (int x=0; x<r; x++){
		int max=0;
		int min=100;
		for (int y=0; y<c; y++){
			if (a[x][y]> max) max=a[x][y];
			if (a[x][y]< min) min=a[x][y];
		}
		cout << "Section " << x+1 << "'s maximum is " << max << " and the minimum is " << min << endl;
	}
}

void total(int a[][30], int r, int c){
	for (int x=0; x<r; x++){
		int sum= 0;
		for (int y=0; y<c; y++){
			sum=sum+a[x][y];
		}
		cout << "Section " << x+1 << "'s total is " << sum << " and the average is " << (double)sum/30.0 << endl;
	}
}

int main(){
	int a[4][30];
	int b[120];
	int f[101];
	int i,j,k=0, mf=0;
//Random numbers for 2D array 
	srand(time(NULL));
	for (int r=0; r<4; r++){
		for ( int c=0; c<30; c++) {
			 a[r][c]= rand()%61 + 40; 
		}
	}
//Run the void functions
        total(a,4,30);
        maximum(a,4,30);
	cout << endl;
//2D array to 1D array
	for (i=0; i<4; i++) {
		for(j=0; j<30; j++) 
			b[k++]=a[i][j];
	}
//Initialize values for frequency array
	for (int i=0; i<101; i++) {
		f[i]=0;
	}
//For every number in the 2D array, the frequency will go up by 1 to the respective 1D array 
        for (int i=0; i<120; i++) {
		f[b[i]]++;
	}
//Max frequency
	for (int i=40; i<101; i++) {
		if (f[i]>=mf) mf=f[i];
	}
//Drawing the histogram 
	for (int row=mf; row>=1; row--) {
        	for (int c=40; c<101; c++) {
        		cout << " "; 
			if (f[c]>=row) cout << " *";
        			else cout << "  ";
     		}
     	cout << endl;
   	}
//Finishing touches 
   	for (int c=0; c<61; c++) { 
		cout << "---";
	}
   	cout << endl;
   	for (int c=40; c<101; c++) {
		cout << " " << c;
	}
   	cout << endl;
	return 0;
}




