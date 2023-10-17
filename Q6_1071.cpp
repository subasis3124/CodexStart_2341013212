#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long y, x;
        cin >> y >> x;
        
        long long z = max(y, x);
        long long diag = (z - 1) * (z - 1);
        
        if (z % 2 == 0) {
            if (x == z) {
                cout << diag + y << endl;
            } else {
                cout << diag + 2 * z - x << endl;
            }
        } else {
            if (y == z) {
                cout << diag + x << endl;
            } else {
                cout << diag + 2 * z - y << endl;
            }
        }
    }

    return 0;
}
