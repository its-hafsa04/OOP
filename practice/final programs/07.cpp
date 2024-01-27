//Design a C++ class for a bookstore inventory system. Define attributes for book title, author, ISBN, price, and quantity 
//in stock. Implement methods to update stock quantity and display book information
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title = "The Catcher in the Rye";
    string author = "J.D. Salinger";
    string ISBN = "978-0-316-76948-0";
    double price = 100.0;
    int quantityInStock = 50;

public:
    // Method to update the stock quantity
    void updateStock(int quantity) {
        if (quantityInStock + quantity >= 0) {
            quantityInStock += quantity;
            cout << "Stock quantity updated successfully." << endl;
        } else {
            cout << "Error: Insufficient stock quantity." << endl;
        }
    }

    // Method to display book information
    void displayBookInfo(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
        cout << "Price: $" << price << endl;
        cout << "Quantity in Stock: " << quantityInStock << endl;
    }
};

int main() {
    // Example usage:
    Book book;

    // Display book information
    book.displayBookInfo();

    // Update stock quantity
    book.updateStock(-10); // Decrease stock by 10
    book.displayBookInfo();

    return 0;
}



