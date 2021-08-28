#include <iostream>
using namespace std;

void doubleValues(int arr[], int size){
// a function which doubles the values of all the elements in an array
  for (int i = 0; i < size; i++){ 
    arr[i] = arr[i] * 2;
  }
}

int main() {
  const int size = 10;
  int arr[size];
  
  cout << "Original Values: ";
  for (int i = 0; i < size; i++){
    arr[i] = i;
    cout << arr[i] << ", ";
  }
  cout << endl;
  
  doubleValues(arr, size);
  
  cout << "Doubled Values: ";
  for (int i = 0; i < size; i++){
    cout << arr[i] << ", "; // the original array has been changed
  }
}
/* O/P 
Original Values: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 
Doubled Values: 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, */
