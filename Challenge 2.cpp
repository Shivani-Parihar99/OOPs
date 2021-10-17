/* Calculate Student's Total Marks
Write a C++ class called student with

private member variables:

name(string type)

mark1 and mark2 (float type)

And member functions:

Get_Marks(int marknumber), a function which should return mark1 if marknumber equals 1 and mark2 otherwise.

calc_total() function should take the two marks entered and return their sum.

Also define two constructors:

A default constructor that takes no parameters and initializes the values to zeros and null.
A constructor that takes the three variables and sets them to given values.
Input#
Name of student, marks in first and second test

Output#
Sum of both marks */
class Student
{
    private:
       float mark1;
       float mark2;
       string name;

    public:
       // Constructor with no arguments (default constructor)
       Student() {
         name = "";
         mark1=0;
         mark2=0;
       }

       // Constructor with three arguments
       Student(string na, float ma1,float ma2) {
         name=na;
         mark1=ma1;
         mark2=ma2;
       }

       int GetMarks(int marknumber) {
           if(marknumber == 1){
             return mark1;
           }
           else{
             return mark2;
           }
       }

       float calc_total() {
         return (mark1+mark2);
       }
};





