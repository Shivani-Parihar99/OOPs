
So far we have observed that the private data members of a class are only accessible through the functions present in that class. Nothing from outside can manipulate the class object without using its functions.

What if we need to access class variables in a function which is not a part of the class? That function would have to become a friend of the class.

A friend function is an independent function which has access to the variables and methods of its befriended class.

To create a friend function for a class, it must be declared in the class along with the friend keyword.
