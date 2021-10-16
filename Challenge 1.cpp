/* Problem Statement#
Write a Rectangle class having two float type variables for length and height, a parametrized constructor and two member functions called perimeter and area which return perimeter and area of the rectangle respectively.

Input#
Length and width of the rectangle

Output#
Perimeter of rectangle and Area of rectangle */

class Rectangle {

   public:
   float length, height;
   Rectangle(float l, float h) {
     length = l;
     height = h;
   }
  
   float perimeter() { 
    return length*2  + height*2;
   }

   float area() { 
    return length*height;
   }
};
