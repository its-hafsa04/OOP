//Develop a C++ program that demonstrates re-throwing an exception. Catch an exception in one function and rethrow it to be 
//caught in another function
#include <iostream>
#include <stdexcept>
using namespace std;
void functionWithException() {
    // Simulate an exception
    throw runtime_error("An exception occurred in functionWithException.");
}

void anotherFunction() {
    try {
        // Call the function that may throw an exception
        functionWithException();
    } catch (const runtime_error& e) {
        // Catch the exception
        cout << "Caught exception: " << e.what() << endl;
    }
}

int main() {
    try {
        // Call another function that may throw an exception
        anotherFunction();
    } catch (const runtime_error& e) {
        // Catch any remaining exceptions
        cerr << "Caught exception: " << e.what() << endl;
    }

    return 0;
}

