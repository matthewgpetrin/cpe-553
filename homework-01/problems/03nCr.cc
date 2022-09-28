#include <iostream>

// Factorial function
double fact(double x){
	double f = x;
	if (x == 1 || x == 0)
		return 1;
	else 
		return f * fact(x - 1);
}

// Choose function
double choose(double x, double y){
	return fact(x)/(fact(y) * fact(x-y));
}

int main() {
	// implement the choose function.
	// Compute in double precision to avoid overflow
	std::cout << choose(52, 6) << '\n'; // 52!/(6! * (52-6)!)
	std::cout << choose(60, 20) << '\n'; // 60! / (20! (60-40)!)

	return 0;
}
