/*Create a classpersonhavingmembers name and age.Derive a classstudent havingmember
percentage. Derive another classteacher havingmembersalary. Write necessary member function
to initialize, read and write data. Write also Mainfunction (Multiple Inheritance)*/
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    void initialize() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
private:
    double percentage;

public:
    void readData() {
        initialize();
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    void writeData() {
        displayData();
        cout << "Percentage: " << percentage << endl;
    }
};

class Teacher : public Person {
private:
    double salary;

public:
    void readData() {
        initialize();
        cout << "Enter salary: ";
        cin >> salary;
    }

    void writeData() {
        displayData();
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Student student;
    Teacher teacher;

    cout << "Enter student details:" << endl;
    student.readData();

    cout << "Enter teacher details:" << endl;
    teacher.readData();

    cout << "Student details:" << endl;
    student.writeData();

    cout << "Teacher details:" << endl;
    teacher.writeData();

    return 0;
}
