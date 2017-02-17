#include <iostream>
using namespace std;
int main() {
        int counter=0, n=100;
        while (n<=1000 && n++) {
		if (n%5==0 && n%6==0){
        	cout << n << " ";
        	counter++;
		}
			if (counter%10==0 && counter!=0) {  
                	cout << endl;
			counter=0;       		
			}
	}
        return 0;
}
