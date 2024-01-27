#include <iostream>
using namespace std;
class Temp {
public:
    float conToFah(float celsius) {
        return (celsius * 9/5) + 32;
    }
};

int main() {
    Temp con;
    float cel, fah;
    cout << "Enter temperature in Cel: ";
    cin >> cel;
    fah= con.conToFah(cel);
    cout << cel << " degree Cel is equal to " << fah << " degree Fah" << endl;

    return 0;
}

