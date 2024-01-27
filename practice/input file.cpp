#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream inputFile("input.txt"); // Create an input file stream
    string line;

    if (inputFile.is_open()) {
        while (std::getline(inputFile, line)) {
            cout << line << endl; // Output the content of the file
        }
        inputFile.close(); // Close the file
    } else {
        cout << "Unable to open the file." << endl;
    }

    return 0;
}

