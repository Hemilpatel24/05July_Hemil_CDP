/*.Write a program to calculate the area of circle, rectangle and triangle using Function
Overloading
Circles Pi ‡ Area ‡ Area;
Rectangles Area ‡ breadth
Triangles ½ ‡Area‡ breadth
*/
#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.14159;

// Function overloading for calculating the area of a circle
float calculateArea(float radius) {
    return PI * pow(radius, 2);
}

// Function overloading for calculating the area of a rectangle
float calculateArea(float length, float breadth) {
    return length * breadth;
}

// Function overloading for calculating the area of a triangle
float calculateArea(float base, float height, float factor = 0.5) {
    return factor * base * height;
}

int main() {
    float radius, length, breadth, base, height;

    // Circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;

    // Rectangle
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;
    cout << "Area of the rectangle: " << calculateArea(length, breadth) << endl;

    // Triangle
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    cout << "Area of the triangle: " << calculateArea(base, height) << endl;

    return 0;
}
