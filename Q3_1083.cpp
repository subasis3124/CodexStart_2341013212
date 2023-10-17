#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char current_char = s[0];
    int max_count = 1;
    int current_count = 1;

    for (int i = 1; i < s.length(); i++) {
        if (s[i] == s[i - 1]) {
            current_count++;
        } else {
            current_count = 1;
            current_char = s[i];
        }

        if (current_count > max_count) {
            max_count = current_count;
        }
    }

    cout << max_count << endl;

    return 0;
}
