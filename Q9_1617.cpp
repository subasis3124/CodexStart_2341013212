#include <iostream>
using namespace std;

const long long MOD = 1000000007;

int main() {
    int n;
    cin >> n;

    long long result = 1;

    for (int i = 0; i < n; i++) {
        result = (result * 2) % MOD;
    }

    cout << result << endl;

    return 0;
}
