/* Pointer Scope#
As we’ve learned in the Function section, function arguments are usually local in scope. Once we return from the function, all its variables are deleted forever.
One solution was to pass external variables by reference using the & operator. This would alter the values of the variables outside the function scope.*/
#include <iostream>
using namespace std;

void square(int &a){ // the function takes an integer and 
  //replaces the value with its square
  a = a * a;
}

int main() {
  int a = 5;
  cout << "The value of a before the function call: " << a << endl;
  square(a);
  cout << "The value of a after the function call: " << a << endl;
}

/* O/P
The value of a before the function call: 5
The value of a after the function call: 25 */


#include <iostream>
using namespace std;

void square(int *a){ // the function takes a pointer and replaces the value with its square
  if(a != NULL){
    *a = (*a) * (*a);
  }
}

int main() {
  int *p = new int(5);
  cout << "The value of p before the function call: " << *p << endl;
  square(p);
  cout << "The value of p after the function call: " << *p << endl;
}
/* O/P
The value of p before the function call: 5
The value of p after the function call: 25 */

