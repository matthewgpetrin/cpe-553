#include <iostream>

//  Original:
//  int main() {
//  	float sum = 0;
//  	for (float i = 1; i <= 100000000.0f; i++)
//  		sum += i;
//  	return sum;
//  }

// Corrected:
int main() {
 	uint64_t sum = 0;
  	for (uint64_t i = 1; i <= 100000000; i++)
  		sum += i;
	return sum;
}