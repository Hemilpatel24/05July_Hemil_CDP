//Write a program of to swap the two values using templates
#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& value1, T& value2) {
    T temp = value1;
    value1 = value2;
    value2 = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Before swapping: ";
    cout << "Number1 = " << num1 << ", Number2 = " << num2 << endl;

    swapValues(num1, num2);

    cout << "After swapping: ";
    cout << "Number1 = " << num1 << ", Number2 = " << num2 << endl;

    double decimal1, decimal2;
    cout << "Enter two decimal numbers: ";
    cin >> decimal1 >> decimal2;

    cout << "Before swapping: ";
    cout << "Decimal1 = " << decimal1 << ", Decimal2 = " << decimal2 << endl;

    swapValues(decimal1, decimal2);

    cout << "After swapping: ";
    cout << "Decimal1 = " << decimal1 << ", Decimal2 = " << decimal2 << endl;

    return 0;
}
