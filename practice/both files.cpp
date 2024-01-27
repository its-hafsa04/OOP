#include <iostream>
#include <fstream>
using namespace std;
int main() {
    fstream file("data.txt", ios::out | ios::in); // Create a file stream for both input and output

    if (file.is_open()) {
        file << "This is a sample text." << endl; // Write to the file
        file.seekg(0); // Move the file pointer to the beginning
        string content;
        getline(file, content); // Read from the file
        cout << "Content of the file: " << content << endl;
        file.close(); // Close the file
    } else {
        cout << "Unable to open the file." << endl;
    }
return 0;
} 

