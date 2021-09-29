# What is a Destructor?
A destructor is the opposite of a constructor. It is called when the object of a class is no longer in use. The object is destroyed and the memory it occupied is now free for future use.

C++ does not have transparent garbage collection like Java. Hence, in order to efficiently free memory, we must specify our own destructor for a class.

In this destructor, we can specify the additional operations which need to be performed when a class object is deleted.

A class destructor can be created in a similar way to the constructor, except that the destructor is preceded by the ~ keyword.
