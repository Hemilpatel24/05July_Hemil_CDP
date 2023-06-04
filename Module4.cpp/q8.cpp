#include <iostream>
using namespace std;

class Interest {
private:
    int principal;
    int year;
    float rate;

public:
    // Constructor with int rate parameter
    Interest(int p, int y, int r) {
        principal = p;
        year = y;
        rate = static_cast<float>(r) / 100;  // Convert rate from percentage to decimal
    }

    // Constructor with default float rate parameter
    Interest(int p, int y, float r = 2.5) {
        principal = p;
        year = y;
        rate = r / 100;  // Convert rate from percentage to decimal
    }

    // Calculate and display simple interest
    void calculateInterest() {
        float interest = principal * rate * year;
        cout << "Simple Interest: " << interest << endl;
    }
};

int main() {
    int principal, year;
    float rate;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Number of Years: ";
    cin >> year;

    cout << "Enter Rate of Interest (in percentage): ";
    cin >> rate;

    Interest interest1(principal, year, rate);
    interest1.calculateInterest();

    Interest interest2(principal, year);  // Use default rate of 2.5%
    interest2.calculateInterest();

    return 0;
}
