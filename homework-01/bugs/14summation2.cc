#include <iostream>
using namespace std;

//  Original:
//  sum the numbers from 1 to n
//  int sum(int n) {
//  	int s = 0;
//  	for (uint16_t i = 1; i <= n; i++)
//  		s += n;
//  	return s;
//  }

// Corrected:
uint64_t sum(uint64_t n) {
	uint64_t s = 0;
	for (uint64_t i = 1; i <= n; i++)
		s += i;
	return s;
}

// Testing:
int main() {
	cout << sum(100000) << '\n';
	
	return 0;
}
