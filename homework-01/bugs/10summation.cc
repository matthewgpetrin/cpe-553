#include <iostream>
using namespace std;

//  Original: 
//  sum the numbers from 1 to n
//  int sum(int n) {
//  	int s;
//  	for (int i = 1; i < n; i++)
//  		s += n;
//  	return s;
//  }

// Corrected: 
int sum(int n) {
	int s = 0;
	for (int i = 1; i <= n; i++)
		s += i;
	return s;
}

// Testing: 
int main(){
	cout << sum(30);
	
	return 0;
}
