# What is a Constructor?
As the name suggests, the constructor is used to construct the object of a class. It is a special member function that outlines the steps that are performed when an instance of a class is created in the program.
A constructor’s name must be exactly the same as the name of its class.
The constructor is a special function because it does not have a return type. We do not even need to write void as the return type. It is a good practice to declare/define it as the first member function.
So, let’s study the different types of constructors and use them to create class objects.
Default Constructor#
The default constructor is the most basic form of a constructor. Think of it this way:

In a default constructor, we define the default values for the data members of the class. Hence, the constructor creates an object in which the data members are initialized to their default values.

# Parameterized Constructor
The default constructor isn’t all that impressive. Sure, we could use set functions to set the values for day, month and year ourselves, but this step can be avoided using a parameterized constructor.
In a parameterized constructor, we pass arguments to the constructor and set them as the values of our data members.
We are basically overriding the default constructor to accommodate our preferred values for the data members.
