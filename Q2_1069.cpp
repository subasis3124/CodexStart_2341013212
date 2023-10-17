#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Calculate the expected sum of numbers from 1 to n
    long long expected_sum = n * (n + 1) / 2;

    // Initialize a variable to store the actual sum
    long long actual_sum = 0;

    for (int i = 1; i < n; i++) {
        int num;
        cin >> num;
        actual_sum += num;
    }

    // The missing number is the difference between the expected and actual sum
    long long missing_number = expected_sum - actual_sum;

    cout << missing_number << endl;

    return 0;
}
