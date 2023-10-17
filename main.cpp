#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    for (long long k = 1; k <= n; k++) {
        long long total_positions = k * k;
        long long attack_positions = 0;

        if (k > 1) {
            // Calculate the number of attacking positions for two knights
            attack_positions = 4 * (k - 1) * (k - 2);
        }

        // Calculate the number of non-attacking positions
        long long non_attack_positions = total_positions * (total_positions - 1) / 2 - attack_positions;

        cout << non_attack_positions << endl;
    }

    return 0;
}
