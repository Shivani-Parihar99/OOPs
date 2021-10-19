/* Calculate Distance Between Points
You have to implement a class called Point that represents a specific point in the x-y plane. It should contain the following:

fields:

x( integer type)

y( integer type)

methods:

default constructor that initializes the point at (0, 0)(0,0)

parameterized constructor that takes input x and y and initializes the point to the respective coordinates.

float distance(), a method which calculates the distance of the point (represented by the object) from the origin, i.e. (0, 0)(0,0)

float distance(int x1, int y1), a method which calculates the distance between the point represented by the class object and (x1, y1)(x1,y1)

The distance between two points (x, y)(x,y) and (x1, y1)(x1,y1) can be calculated by the following formula:

{distance} = sqrt{(x_1 - x)^2 + (y_1 - y)^2}*/
#include <iostream>
#include <cmath>
using namespace std;

class Point {

  // Private fields
  private:
  int x;
  int y;

  public:

  // Default Constructor
  Point() {
    x = 0;
    y = 0;
  }

  // Parameterized Constructor
  Point(int x, int y) { 
    this->x = x;
    this->y = y;
  }


  double distance() {
    double distance = sqrt(x*x + y*y);
    return distance;
  }

  double distance(int x2, int y2) {
    double distance = sqrt(((x2-x)*(x2-x))+((y2-y)*(y2-y)));
    return distance;
  }

};
