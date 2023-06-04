/*Define a classto represent abook shop Include the following memberss Data Members
-Name ofAuthor
-Name of Title
-Name of Price
-Name Publisher
-Member Functions
-To Assign Values
-To Display Values*/
#include <iostream>
#include <string>

using namespace std;

class BookShop {
private:
    string authorName;
    string bookTitle;
    double price;
    string publisher;

public:
    // Constructor
    BookShop(const string& author, const string& title, double bookPrice, const string& bookPublisher)
        : authorName(author), bookTitle(title), price(bookPrice), publisher(bookPublisher) {}

    // Function to assign values
    void assignValues(const string& author, const string& title, double bookPrice, const string& bookPublisher) {
        authorName = author;
        bookTitle = title;
        price = bookPrice;
        publisher = bookPublisher;
    }

    // Function to display values
    void displayValues() {
        cout << "Author: " << authorName << endl;
        cout << "Title: " << bookTitle << endl;
        cout << "Price:" << price << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

int main() {
    // Create an instance of the BookShop class
    BookShop book("Robert T. Kayosaki", "Rich Dad Poor Dad", 333, "Plata Publishing");

    // Display book information
    book.displayValues();

    return 0;
}
