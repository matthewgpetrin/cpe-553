//  Author: Matthew Petrin 2022
//	Complete this program by implementing class Complex according to the
//	specification in main. Do not change main.
//	When you are done, delete this comment and add your name as author
//
//	The bottom of main uses pi and hence will have to be compiled with
//	g++ -std=c++20 ...

#include <iostream> 
#include <cmath>
#include <numbers>

using namespace std;

constexpr double pi = std::numbers::pi; // No error when compiled using -std=c++20 - Shows as error in VSCode

class Complex{
	private:
	double num1 = 0;
	double num2 = 0;

	public:
	Complex(){ // Default constructor
		this->num1 = 0;
		this->num2 = 0;
	}

	Complex(double x){ // Single parameter constructor
		this->num1 = x;
		this->num2 = 0;
	}
	Complex(double x, double y){ // Double parameter constructor
		this->num1 = x;
		this->num2 = y;
	}

	friend Complex operator +(const Complex& m, const Complex& n){ // Operator constructor?? for addition
		Complex ans((m.num1 + n.num1), (m.num2 + n.num2)); // Constructs object of type Complex within Complex
		return ans; // Returns object type Complex
	}

	friend ostream& operator <<(ostream& s, const Complex& ans){ // Operator constructor?? for iostream cout
		return s << ans.num1 << " + " << ans.num2 << "j"; // Returns ostream with deconstructed object of type Complex
	}
};

class Circle{
	private:
	double x = 0; // X Coord
	double y = 0; // Y Coord
	double r = 0; // Radius

	public:
	Circle (double x, double y, double r){ // Constructor
		this->x = x;
		this->y = y;
		this->r = r;
	}

	bool contains(double a, double b){ // Checks if the point is inside the circle
		double d = sqrt(pow((a - this->x), 2) + pow((b - this->y), 2)); // Distance from origin (x, y) 
		if(d <= this->r) // If distance from origin > radius -> Not in circle
			return true;
		else
			return false;
	}
};

int main() {
	Complex c1;
	Complex c2(1.0, 2.5);
	Complex c3 = 2.5;
	Complex c4 = c2 + c3;
	cout << c4 << '\n';

	double x = 50, y = 62.5, r = 10;
	Circle c(x, y, r);
	cout << c.contains(x+8,y) << '\n';
	cout << c.contains(x+10,y) << '\n';
	cout << c.contains(x+10,y+3) << '\n';
	cout << c.contains(x,y+10) << '\n';
	double dx = r * cos(45 * pi / 180);
	cout << c.contains(x+dx, y+dx) << '\n';

	return 0;
}