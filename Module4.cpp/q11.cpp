//Write a Program of Two 1D Matrix Addition using Operator Overloading.
#include <iostream>
using namespace std;

class Matrix {
private:
    int* data;
    int size;

public:
    // Constructor
    Matrix(int n) {
        size = n;
        data = new int[size];
    }

    // Destructor
    ~Matrix() {
        delete[] data;
    }

    // Operator overloading for addition
    Matrix operator+(const Matrix& other) {
        Matrix result(size);
        for (int i = 0; i < size; i++) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    // Function to read matrix elements
    void readMatrix() {
        cout << "Enter the elements of the matrix:" << endl;
        for (int i = 0; i < size; i++) {
            cin >> data[i];
        }
    }

    // Function to display matrix elements
    void displayMatrix() {
        cout << "Matrix elements: ";
        for (int i = 0; i < size; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;

    Matrix matrix1(size);
    Matrix matrix2(size);

    cout << "Matrix 1:" << endl;
    matrix1.readMatrix();
    cout << "Matrix 2:" << endl;
    matrix2.readMatrix();

    Matrix sum = matrix1 + matrix2;

    cout << "Sum of the matrices:" << endl;
    sum.displayMatrix();

    return 0;
}
