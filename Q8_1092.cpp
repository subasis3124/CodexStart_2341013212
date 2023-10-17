#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;

    long long totalSum = n * (n + 1) / 2;

    if (totalSum % 2 != 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;

        long long targetSum = totalSum / 2;
        vector<int> setA, setB;

        for (int i = n; i >= 1; i--) {
            if (targetSum - i >= 0) {
                setA.push_back(i);
                targetSum -= i;
            } else {
                setB.push_back(i);
            }
        }

        // Output the sizes and elements of both sets
        cout << setA.size() << endl;
        for (int num : setA) {
            cout << num << " ";
        }
        cout << endl;

        cout << setB.size() << endl;
        for (int num : setB) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
