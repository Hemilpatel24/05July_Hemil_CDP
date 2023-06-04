/*Assume thatthe testresults of a batch ofstudents arestored in three different classes. Class
Students are stores the roll number. Class Test stores the marks obtained in two subjects and class
result containsthe total marks obtained in the test.The classresult can inheritthe details ofthe marks
obtained in the test and roll number ofstudents.
(Multilevel Inheritance)
*/
#include <iostream>
using namespace std;

class Student {
protected:
    int rollNumber;

public:
    void inputRollNumber() {
        cout << "Enter roll number: ";
        cin >> rollNumber;
    }
};

class Test : public Student {
protected:
    int marksSubject1;
    int marksSubject2;

public:
    void inputMarks() {
        inputRollNumber();
        cout << "Enter marks for subject 1: ";
        cin >> marksSubject1;
        cout << "Enter marks for subject 2: ";
        cin >> marksSubject2;
    }
};

class Result : public Test {
private:
    int totalMarks;

public:
    void calculateTotalMarks() {
        totalMarks = marksSubject1 + marksSubject2;
    }

    void displayResult() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks for Subject 1: " << marksSubject1 << endl;
        cout << "Marks for Subject 2: " << marksSubject2 << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result result;

    result.inputMarks();
    result.calculateTotalMarks();
    result.displayResult();

    return 0;
}
