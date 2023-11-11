#include <iostream>
#include <string>
 
using namespace std;
 
class Book {
private:
    string title;
    string author;
    double price;
 
public:
    // Default constructor
    Book() : title("Unknown"), author("Unknown"), price(0.0) {}
 
    // Member function to display book details
    void displayBookDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: Rs." << price << endl;
    }
};
 
int main() {
    // Create an instance of the Book class using the default constructor
    Book myBook;
 
    // Display the book details
    cout << "Book Details:" << endl;
    myBook.displayBookDetails();
 
    return 0;
}