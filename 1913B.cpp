#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();
        int C0 = 0, C1 = 0;
        for (char c : s) (c == '0' ? C0 : C1)++;

        int prefix0 = 0, prefix1 = 0;
        int bestM = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '0') prefix0++;
            else prefix1++;
            // prefix ones must be coverable by total zeros,
            // prefix zeros must be coverable by total ones
            if (prefix1 <= C0 && prefix0 <= C1) {
                bestM = i + 1;
            } else {
                break; // feasibility is monotonic, stop at first failure
            }
        }
        cout << (n - bestM) << "\n";
    }
    return 0;
}
