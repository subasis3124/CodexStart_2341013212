#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    long long moves = 0;
    long long prev = 0;
    
    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        
        if (a < prev) {
            moves += prev - a;
        } else {
            prev = a;
        }
    }
    
    cout << moves << endl;

    return 0;
}
