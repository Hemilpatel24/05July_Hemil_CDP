/*Writea program to find the multiplicationvaluesand the cubic valuesusing inline
function*/
#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

inline int cube(int num) {
    return num * num * num;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int product = multiply(num1, num2);
    cout << "Product: " << product << endl;

    int cubicNum = cube(num1);
    cout << "Cubic Value of num1: " << cubicNum << endl;

    return 0;
}
