#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main(){
    vector<Shape*> shapes;
    shapes.push_back(new Circle(100, 200, 50,  1.0, 0 , 0));
    shapes.push_back(new Rectangle(200, 300, 50, 40,  0, 1,0, 0));
    shapes.push_back(new Triangle(100, 500, 300, 600, 400, 500,  0, 0, 1.0));

    ofstream f("out.ps");
    for (auto s : shapes){
        s->print(f);
    }
};

// r g b setrgbcolor x y r 0 360 arc fill
// r g b setrgbcolor x y moveto x+w y lineto x+w y+h lineto x y+h lineto closepath fill
// r g b setrgbcolor x y moveto x2 y2 lineto x3 y3 lineto closepath fill
