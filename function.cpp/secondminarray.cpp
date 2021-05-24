int secondMinimum(int arr[], int size) {

    int min = 214748364;
    int secondmin = 214748364;
 
    for (int i = 0; i < size; i++) {
      if (arr[i] < min) {
        secondmin = min;
        min = arr[i];
      }
      else if (arr[i] < secondmin) {
        secondmin = arr[i];
      }
    }
    return secondmin;
}
