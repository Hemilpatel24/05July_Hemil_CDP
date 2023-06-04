//Write a program of to concatenate the two strings using Operator Overloading.
#include <iostream>
#include <cstring>
using namespace std;

class String {
private:
    char* str;
    int size;

public:
    // Constructor
    String(const char* s = "") {
        size = strlen(s);
        str = new char[size + 1];
        strcpy(str, s);
    }

    // Destructor
    ~String() {
        delete[] str;
    }

    // Operator overloading for concatenation
    String operator+(const String& other) {
        int newSize = size + other.size;
        char* newStr = new char[newSize + 1];
        strcpy(newStr, str);
        strcat(newStr, other.str);

        String result(newStr);
        delete[] newStr;

        return result;
    }

    // Function to display the string
    void displayString() {
        cout << str << endl;
    }
};

int main() {
    String str1("Hello, ");
    String str2("World!");

    String concatenated = str1 + str2;

    cout << "Concatenated String: ";
    concatenated.displayString();

    return 0;
}
