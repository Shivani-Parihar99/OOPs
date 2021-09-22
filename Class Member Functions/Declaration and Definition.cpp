class Rectangle {
  int length;
  int width;

  public:
  void setLength(int l){ // This function changes the value of length
    length = l;
  }
  
  int area(){
    return length * width; // Only the values of the data members are
                           // accessed and used to calculate the area
  }
};
