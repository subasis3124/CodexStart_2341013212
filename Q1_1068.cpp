#include <iostream>

using namespace std;

int main() {
    long long n;
    cin >> n;

    cout << n << " ";  // Print the initial number

    while (n != 1) {
        if (n % 2 == 0) {
            // If 'n' is even, divide it by 2
            n /= 2;
        } else {
            // If 'n' is odd, multiply it by 3 and add 1
            n = n * 3 + 1;
        }
        cout << n << " ";  // Print the current number
    }

    cout << endl;
    return 0;
}
