/*.Define a class to represent lecture details. Include the following members and the
program should handle at lest details of 5 lecturer.
Data members
Name of the lecturer
Name of the subject
Name of course
Number oflecturers
Data functions
To assign initial values
To add a lecture details
To display name and lecture details*/
#include <iostream>
#include <string>
using namespace std;

class LectureDetails {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numOfLectures;

public:
    void assignValues(const string& name, const string& subject, const string& course, int numOfLectures) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        this->numOfLectures = numOfLectures;
    }

    void addLectureDetails() {
        string name, subject, course;
        int numOfLectures;

        cout << "Enter lecturer name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter subject name: ";
        getline(cin, subject);

        cout << "Enter course name: ";
        getline(cin, course);

        cout << "Enter number of lectures: ";
        cin >> numOfLectures;

        assignValues(name, subject, course, numOfLectures);
    }

    void displayDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject Name: " << subjectName << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Number of Lectures: " << numOfLectures << endl;
    }
};

int main() {
    const int MAX_LECTURERS = 5;
    LectureDetails lecturers[MAX_LECTURERS];

    // Assign initial values for the lecturers
    lecturers[0].assignValues("John Doe", "Mathematics", "Bachelor of Science", 10);
    lecturers[1].assignValues("Jane Smith", "Physics", "Bachelor of Arts", 12);
    lecturers[2].assignValues("David Johnson", "Computer Science", "Master of Science", 8);

    // Add lecture details for the remaining lecturers
    for (int i = 3; i < MAX_LECTURERS; i++) {
        cout << "Enter details for lecturer " << (i + 1) << ":" << endl;
        lecturers[i].addLectureDetails();
    }

    // Display lecture details for all the lecturers
    for (int i = 0; i < MAX_LECTURERS; i++) {
        cout << "Details for lecturer " << (i + 1) << ":" << endl;
        lecturers[i].displayDetails();
        cout << endl;
    }

    return 0;
}
