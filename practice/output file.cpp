#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream outputFile("output.txt"); // Create an output file stream

    if (outputFile.is_open()) {
        outputFile << "Hello, this is a sample output to a file." << endl;
        outputFile.close(); // Close the file
        cout << "Data has been written to the file." << endl;
    } else {
        cout << "Unable to open the file." <<endl;
    }

    return 0;
}

