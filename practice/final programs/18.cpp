//18.	Write a C++ program to find Area of square, rectangle, circle and triangle using Function Overloading. 
#include <iostream>
#include <cmath>

// Function to calculate the area of a square
double calculateArea(int side) {
    return side * side;
}

// Function to calculate the area of a rectangle
double calculateArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a circle
double calculateArea(double radius) {
    return 3.14159 * radius * radius;
}

// Function to calculate the area of a triangle
double calculateArea(double base, double height, char) {
    return 0.5 * base * height;
}

int main() {
    // Calculate and display the area of a square
    std::cout << "Area of square with side 5: " << calculateArea(5) << std::endl;

    // Calculate and display the area of a rectangle
    std::cout << "Area of rectangle with length 4 and width 6: " << calculateArea(4.0, 6.0) << std::endl;

    // Calculate and display the area of a circle
    std::cout << "Area of circle with radius 3: " << calculateArea(3.0) << std::endl;

    // Calculate and display the area of a triangle
    std::cout << "Area of triangle with base 5 and height 8: " << calculateArea(5.0, 8.0, 't') << std::endl;

    return 0;
}

