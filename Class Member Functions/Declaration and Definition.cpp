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


/* Scope Resolution Operator#
The scope resolution operator (::) allows us to simply declare the member functions in the class and define them elsewhere in the code. */

class Rectangle {
  int length;
  int width;

  public:
  
  // We only write the declaration here
  void setLength(int l);
  int area();
};

// Somewhere else in the code
void Rectangle::setLength(int l){ // Using the scope resolution operator
  length = l;
}

int Rectangle::area(){
  return length * width; 
}
