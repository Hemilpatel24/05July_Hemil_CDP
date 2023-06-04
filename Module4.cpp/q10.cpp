/*.Write a program to find the multiplication values and the cubic values using inline
function.
*/
#include <iostream>
using namespace std;

// Inline function for finding the multiplication of two numbers
inline int multiply(int a, int b) {
    return a * b;
}

// Inline function for finding the cubic value of a number
inline int cube(int num) {
    return num * num * num;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Find the multiplication of num1 and num2 using the multiply() inline function
    int multiplicationResult = multiply(num1, num2);
    cout << "Multiplication: " << multiplicationResult << endl;

    int num3;

    cout << "Enter a number: ";
    cin >> num3;

    // Find the cubic value of num3 using the cube() inline function
    int cubicResult = cube(num3);
    cout << "Cubic Value: " << cubicResult << endl;

    return 0;
}
