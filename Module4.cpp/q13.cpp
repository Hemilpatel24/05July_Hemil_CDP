/*.Assume a class cricketer is declared. Declare a derived class batsman from cricketer
Data member of batsman. Total runs, Average runs and best performance. Member
functions input data, calculate average runs, Display data. (Single Inheritance)*/
#include <iostream>
using namespace std;

class Cricketer {
protected:
    string name;
    int age;

public:
    void inputData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void calculateAverageRuns() {
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;

        averageRuns = static_cast<double>(totalRuns) / bestPerformance;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;

    batsman.inputData();
    batsman.calculateAverageRuns();
    batsman.displayData();

    return 0;
}
