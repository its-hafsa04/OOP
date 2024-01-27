//Write a C++ program by using classes to find the greatest and lowest value from the array. If the greatest value is greater
// then 100, then print “its my good luck”, otherwise print ” it’s my bad luck”.
#include <iostream>
using namespace std;
class ArrayAnalyzer {
private:
     int* arr;
     int size;

public:
    // Constructor to initialize the array and size
    ArrayAnalyzer(int* array, int arraySize) : arr(array), size(arraySize) {}

    // Method to find the greatest value in the array
    int findGreatestValue(){
        int greatest = arr[0];

        for (int i = 1; i < size; ++i) {
            greatest = max(greatest, arr[i]);
        }

        return greatest;
    }

    // Method to find the lowest value in the array
    int findLowestValue() {
        int lowest = arr[0];

        for (int i = 1; i < size; ++i) {
            lowest = min(lowest, arr[i]);
        }

        return lowest;
    }
};

int main() {
     int size = 5;
    int numbers[size] = {75, 120, 45, 30, 90};

    // Create an instance of ArrayAnalyzer
    ArrayAnalyzer arrayAnalyzer(numbers, size);

    // Find the greatest and lowest values
    int greatest = arrayAnalyzer.findGreatestValue();
    int lowest = arrayAnalyzer.findLowestValue();

    // Print the results
    cout << "Greatest Value: " << greatest << endl;
    cout << "Lowest Value: " << lowest << endl;

    // Check if the greatest value is greater than 100 and print a message
    cout << (greatest > 100 ? "It's my good luck!" : "It's my bad luck.") << endl;

    return 0;
}

