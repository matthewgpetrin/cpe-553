#include <iostream>
#include <cmath>

using namespace std;

//1. What does the following program do?

class A {
public:
	A()      { cout << "x"; }
	A(int x) { cout << "y"; }
	friend A operator +(const A& a, const A& b) {
		return A(3);
	}
	friend ostream& operator <<(ostream& s, const A& a) {
		return s << "hello";
	}
};

int main() {
	A a1;
	A a2(4);
	A a3 = a1 + a2;
	cout << a4;
}

// Ans: 
// Creates object a1 of type A (ostream cout "x")
// Creates object a2 of type A (ostream cout "y")
// Creates object a3 of type A (ostream cout "y" via friend operator constructor? Not sure what the real name is)
// Returns an error because a4 has not been initialized?
// Alternatively prints "hello" in console

//2. Write a class Vector to do the following

int main() {
	Vector a(1.0,2.2,-3.1); // x=1, y = 2.2, z = -3.1
	Vector b(2.0,1.2,1.1); // x = 2, y=1.2, z=1.1
	Vector c = a + b; // x=3.0, y=3.4, z=-2.0
	cout << c << '\n'; // should print "3.0,3.4,-2.0"
}

// Ans:
class Vector{
	public:
	float arr[3];
	
	Vector(float a, float b, float c){
		this->arr[0] = a;
		this->arr[1] = b;
		this->arr[2] = c;
	}

	friend Vector operator +(const Vector& v1, const Vector& v2){
		return Vector((v1.arr[0]+v2.arr[0]), (v1.arr[1]+v2.arr[1]), (v1.arr[2]+v2.arr[2])); 
	}

	friend ostream& operator <<(ostream& s, const Vector& v){
		return s << v.arr[0] << ", " << v.arr[1] << ", " << v.arr[2]; 
	}
};

