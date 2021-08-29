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
