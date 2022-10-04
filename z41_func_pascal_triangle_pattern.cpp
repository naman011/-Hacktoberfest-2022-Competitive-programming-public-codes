#include<iostream>
using namespace std;

/* Pascal Triangle

n=5

1             ---> 0C0
1 1           ---> 1C0 1C1
1 2 1         ---> 2C0 2C1 2C2
1 3 3 1
1 4 6 4 1 

*/

int factorial(int n) { //function to find factorial of number n

	int fact=1;

	for(int i=n; i!=0; i--) {

		fact *= i;
	}

	return fact;
}

int nCr(int n, int r) { //function to do nCr

	int value = (factorial(n))/(factorial(n-r)*factorial(r));
	return value;
}

int main() {

	int n;
	cout << "Enter n :";
	cin >> n;

	for(int i=0; i<n; i++) {

		for(int j=0; j<=i; j++) {

			cout << nCr(i,j) << " ";
		}
		cout << endl;
	}

	return 0;
}