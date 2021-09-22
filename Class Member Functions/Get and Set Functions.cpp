class Rectangle {
  int length;
  int width;

  public:
  
  // get and set for length
  void setLength(int l);
  int getLength();
  
  // get and set for width
  void setWidth(int w);
  int getwidth();
  
  int area();
};


void Rectangle::setLength(int l){ 
  length = l;
}
int Rectangle::getLength(){ 
  return length;
}

void Rectangle::setWidth(int w){ 
  width = w;
}
int Rectangle::getWidth(){ 
  return width;
}

int Rectangle::area(){
  return length * width; 
}
