#include <iostream>

int sum(int x, int y){
	int sum = 0;
	for (int i = x; i <= y; i++)			
		sum += i;
	return sum;
}

int sumsq(int x, int y){
	int sumsq = 0;
	for (int i = x; i <= y; i++)
		sumsq += i*i;
	return sumsq;	
}

int prod(int x, int y){
	int prod = 1;
	for (int i = x; i <= y; i++)
		prod *= i;
	return prod;
}

int main() {
	std::cout << sum(1, 3) << '\n'; // should print 6 (1+2+3)
	std::cout << sum(2, 4) << '\n'; // should print 9 (2+3+4)
	std::cout << sumsq(2, 5) << '\n'; // should print 2*2 + 3*3 + 4*4 + 5*5 = 54
	std::cout << prod(3,5) << '\n'; // should print 60 (3*4*5)

	return 0;
}
