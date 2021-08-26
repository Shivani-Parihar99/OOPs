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

/* O/P The address of var: 0x7ffca45c8324
The value of var: 10
The new value of var is: 15
The new value of *p and var: 20
1
5 */

// Pointers and Dynamic Memory
// Objects in the Heap
#include <iostream>
using namespace std;

int main() {
  int *p = new int;   // dynamic memory reserved for an integer 
  *p = 10;   // the object is assigned the value of 10
  cout << "The value of the object p points to: " << *p << endl;
  
  int *q = p;   // both pointers point to the same object
  cout << "The value of the object q points to: " << *q << endl;
  
  double *arr = new double[500]; // an array of size 500 has been created in the heap
  arr[0] = 50;
  cout << "arr[0]: " << arr[0] << endl;
  
  // delete pointers and free up space
  delete p, q;
  delete[] arr;
  cout << "p now points to a random value and should not be accesed: " << *p << endl;
  p = new int(5); // The pointer can now be re-used to point to something else
  cout << "The value of the object p points to: " << *p << endl;
}

/* O/P
The value of the object p points to: 10
The value of the object q points to: 10
arr[0]: 50
p now points to a random value and should not be accesed: 220064632
The value of the object p points to: 5 */
