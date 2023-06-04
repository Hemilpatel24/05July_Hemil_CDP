/*Write a program of to display in this format using class
Roll No Sub1 Sub2 Sub3 Total Percentage
1 30 25 45 100
2 25 20 25 70
3 20 15 35 70
4 35 30 40 105*/
#include <iostream>
#include <iomanip>
using namespace std;

class Student {
private:
    int rollNo;
    int sub1;
    int sub2;
    int sub3;

public:
    void setStudentInfo(int rollNo, int sub1, int sub2, int sub3) {
        this->rollNo = rollNo;
        this->sub1 = sub1;
        this->sub2 = sub2;
        this->sub3 = sub3;
    }

    void displayStudentInfo() {
        int total = sub1 + sub2 + sub3;
        float percentage = static_cast<float>(total) / 3;

        cout << setw(8) << rollNo;
        cout << setw(6) << sub1;
        cout << setw(6) << sub2;
        cout << setw(6) << sub3;
        cout << setw(6) << total;
        cout << setw(12) << fixed << setprecision(2) << percentage << "%" << endl;
    }
};

int main() {
    Student students[4];

    students[0].setStudentInfo(1, 30, 25, 45);
    students[1].setStudentInfo(2, 25, 20, 25);
    students[2].setStudentInfo(3, 20, 15, 35);
    students[3].setStudentInfo(4, 35, 30, 40);

    cout << "Roll No  Sub1  Sub2  Sub3  Total  Percentage" << endl;
    for (int i = 0; i < 4; i++) {
        students[i].displayStudentInfo();
    }

    return 0;
}
