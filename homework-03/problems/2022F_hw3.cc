// Petrin 2022

#include <iostream>
#include <cmath>

constexpr double PI = 3.14159265358979;
constexpr double TO_RADIANS = PI / 180;

// Sum of squares:
uint64_t sumsq(uint64_t x, uint64_t y){
	uint64_t z = 0;
	for(uint64_t i = x; i <= y; i++)
		z += (i*i);
	return z;
}

// Angle in degrees:
double angle(double x, double y){
	return atan2(x, y);
}

// Convert angle to radians
double ang(double x){
	return x*TO_RADIANS;
}

// Polar to rectangle
void polar2rect(double rad, double ang, double& x, double& y){
	x = rad * cos(ang);
	y = rad * sin(ang);
}	

// Multiples table
void multtable(uint16_t x){
	for (int i = 1; i <= x; i++){
		for (int i = 1; i <= x; i++){
			if (i<10)
				std::cout << "0" << i << "  ";
			else 
				std::cout << i << "  ";
		}
	std::cout << "\n";
	}	
}

// Returs
uint64_t * cubeit(uint64_t arr[], uint64_t len){
	for (int i = 0; i < len; i++){
		arr[i] = pow(arr[i], uint64_t(3));
	}
	return arr;
}

void print(const uint64_t arr[], uint64_t len) {
	for (int i = 0; i < len; i++){
		std::cout << arr[i] << ' ';
	}
}

int main() {
	// write a function that computes the sum of squares
	uint64_t s = sumsq(1, 5); // 1*1 + 2*2 + 3*3 + 4*4 + 5*5
	std::cout << s << '\n';

	// look up the floating point library in the notes use atan2
	/*
        ang
       /|
      / |
     /  | 4
    /   |
    -----
      3
	 */
	double ang = angle(3, 4); // calculate the angle for 3-4-5 right triangle
	std::cout << ang << '\n'; // in radians

	double deg = 0; // TODO: convert to degrees

	double r = 5;

	double x, y;
	polar2rect(r, ang, x, y);
	std::cout << "x= " << x << " y= " << y << '\n';

	/*
    1  2  3  4  5
    2  4  6  8  10
    3  6  9  12 15
    4  8  12 16 20
    5  10 15 20 25
	*/
	multtable(5);

	uint64_t a[] = {1, 3, 5, 9};
	cubeit(a, 4); // 1*1*1   3*3*3   5*5*5   9*9*9
	print(a,4);

	return 0;
}