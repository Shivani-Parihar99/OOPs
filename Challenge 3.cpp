/* Implement a Calculator Class
Write a C++ class called Calculator with

private member variables:

num1 and num2 (float type)
And member functions:

add(float n1, float n2), a function which returns the addition of two numbers

Subtract(float n1, float n2), a function which returns the subtraction of n1 from n2

multiply(float n1, float n2), a function which returns the multiplication of numbers

divide(float n1, float n2), a function which returns the division of n2 by n1

Define a default constructor which initializes both numbers by zeros

Input#
Pass floating point numbers in the member functions

Output#
Addition, Subtraction, division, and multiplication */
class calculator{
  float num1, num2;
  public:
  calculator() {
    num1 = 0;
  	num2 = 0;
  }

  int add(float n1, float n2){
    num1 = n1;
    num2 = n2;
    return num1 + num2;
  }

  float subtract(float n1, float n2){
    num1 = n1;
    num2 = n2;
    return num2 - num1;
  }

  float multiply(float n1, float n2){
    num1 = n1;
    num2 = n2;
    return num1 * num2;
  }

  float divide(float n1, float n2){
    num1 = n1;
    num2 = n2;
    return num2 / num1;
  }
};
