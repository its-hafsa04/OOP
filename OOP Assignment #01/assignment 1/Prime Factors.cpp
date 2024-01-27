#include <iostream>
using namespace std;
class PrimeFact {
public:
    void find(int n) {
        if (n <= 1) {
            cout << "Not defined" <<endl;
            return;
        }
 cout << "Prime factors of " << n << ": ";
        while (n % 2 == 0) {
           cout << "2 ";
            n /= 2;
        }
        for (int i = 3; i <= n; i += 2) {
            while (n % i == 0) {
            cout << i << " ";
                n = n / i;
            }
        }
cout <<endl;
    }
};

int main() {
    PrimeFact fact;
    int n;
	cout << "Enter a number: ";
cin >> n;
    fact.find(n);
	return 0;
}

