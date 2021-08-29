// Basic Addition and Subtraction
#include <iostream>
using namespace std;

int main() {
  int *p = new int(10);
  cout << "p: " << p << endl;
  cout << "value of p: " << *p << endl << endl;
  
  p = p + 1;
  cout << "p: " << p << endl;
  cout << "value of p: " << *p << endl << endl;
}
/* O/P p: 0x9e5c20
value of p: 10

p: 0x9e5c24
value of p: 0 */

// Arrays and Pointer Arithmetic
#include <iostream>
using namespace std;

int main() {
  int *arr = new int[10];
  
  for(int i = 0; i < 10 ; i++){
    arr[i] = i;
  }
  
  cout << "arr[0]: " << *arr << endl;
  cout << "arr[3]: " << *(arr + 3) << endl;
}
/* O/P arr[0]: 0
arr[3]: 3 */
