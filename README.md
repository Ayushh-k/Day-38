# Day-38
Cpp Practice Questions

You are tasked with designing a Shape system that can handle different types of shapes (e.g., Circle, Rectangle) in C++. The system should use abstraction to define a common interface for all shapes and allow for flexibility in handling various shape types.

Your task is to:

Create an abstract class named Shape with the following:

A pure virtual method area() that returns the area of the shape.
A pure virtual method perimeter() that returns the perimeter of the shape.
Implement two derived classes:

Circle: This class should have a private attribute radius and implement the area() and perimeter() methods.
Rectangle: This class should have private attributes width and height and implement the area() and perimeter() methods.
In the main function, create objects of Circle and Rectangle, and print their areas and perimeters using the abstract class interface.
