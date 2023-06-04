/*. Writea programto find the max numberfromgiventwo numbers using friend
function*/
#include <iostream>
using namespace std;

class Number {
private:
    int num;

public:
    Number(int n) : num(n) {}

    friend int findMax(Number n1, Number n2);
};

int findMax(Number n1, Number n2) {
    return (n1.num > n2.num) ? n1.num : n2.num;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    Number number1(num1);
    Number number2(num2);

    int maxNum = findMax(number1, number2);
    cout << "Maximum Number: " << maxNum << endl;

    return 0;
}
