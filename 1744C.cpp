#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long t; 
    cin >> t;
    while (t--) {
        int n; 
        char c; 
        cin >> n >> c;
        string s; 
        cin >> s;
        
        string doubled = s + s;
        int len = doubled.length();
        
        long long index = -1;
        long long maxi = INT_MIN;
        
        for (int i = len - 1; i >= 0; i--) {
            if (doubled[i] == 'g') {
                index = i;
            }
            if (doubled[i] == c) {
                if (index != -1) {
                    long long diff = index - i;
                    maxi = max(maxi, diff);
                }
            }
        }
        cout << maxi << "\n";
    }
    return 0;
}
