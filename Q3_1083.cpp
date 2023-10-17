#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = (n * (n + 1)) / 2;

    int sum_number = 0;
    int num;
    for (int i = 0; i < n - 1; i++) {
        cin >> num;
        sum_number += num;
    }

    int missing_number = sum - sum_number;

    cout << missing_number << endl;
    
    return 0;
}