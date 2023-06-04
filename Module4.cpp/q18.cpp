//Writea program to swapthe two numbers using friend function
#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}

    friend void swapNumbers(Number& num1, Number& num2);
};

void swapNumbers(Number& num1, Number& num2) {
    int temp = num1.num;
    num1.num = num2.num;
    num2.num = temp;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Number number1(num1);
    Number number2(num2);

    cout << "Before swapping: ";
    cout << "Number1 = " << number1.num << ", Number2 = " << number2.num << endl;

    swapNumbers(number1, number2);

    cout << "After swapping: ";
    cout << "Number1 = " << number1.num << ", Number2 = " << number2.num << endl;

    return 0;
}
