#include <iostream>
using namespace std;

double product(double x, double y){
  return x * y;
}

// Overloading the function to handle three arguments
double product(double x, double y, double z){
  return x * y * z;
}

// Overloading the function to handle floats
float product(float x, float y){
  return x * y;
}

int main() {
  double x = 10;
  double y = 20;
  double z = 5;
  float a = 12.5;
  float b = 4.654;
  cout << product(x, y) << endl;
  cout << product(x, y, z) << endl;
  cout << product(a, b) << endl;
  // cout << product(x) << endl; it would crash since product doesn’t know how to handle a single argument.
}
/* Advantages of Function Overloading 
overloading saves us memory in the system. Creating new functions is more costly compared to overloading a single one.
Since they are memory-efficient, overloaded functions are compiled faster compared to different functions, especially if the list of functions is long.
An obvious benefit is that the code becomes simple and clean. We don’t have to keep track of different functions.
Polymorphism is a very important concept in object-oriented programming. It will come up later on in the course, but function overloading plays a vital role in its implementation.
