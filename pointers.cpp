#include <iostream>
using namespace std;

int main() {
  int var = 10;
  int *p;
  p = &var; // p points to the address of var 
  cout << "The address of var: " << p << endl;
  cout << "The value of var: " << *p << endl;
  
  *p = 15; // update the value of p
  cout << "The new value of var is: " << var << endl; // var is updated!
  
  var = 20; // the value of var is updated
  cout << "The new value of *p and var: " << *p << endl; // p has been updated as well!
  
  int arr[] = {1, 3, 5, 7};
  p = arr; // p now points to the first element of arr
  cout << *p << endl; // the element at the zero-th index
  cout << *(p + 2) << endl; // the element at the second index
}
