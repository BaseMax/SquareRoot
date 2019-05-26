#include <iostream>
#include <string>
using namespace std;

double root(double n){
	double low = 0;
	double hight = n;
	double middle;
	double middlePow;
	for(int i = 0 ; i < 40 ; i++){
		middle = (low+hight)/2;
		middlePow = middle*middle;
		if(middlePow == n)
			return middle;
		else if(middlePow > n)
			hight = middle;
		else
			low = middle;
	}
	return middle;
}

int main() {
	// cout << root(4) << "\n";
	// cout << root(5) << "\n";
	// cout << root(15) << "\n";
	// cout << root(16) << "\n";
	for(int i=1;i<=100;i++) {
		cout << i << "\t = \t" << root(i) << "\n";
	}
	return 0;
}
