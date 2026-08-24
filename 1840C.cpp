#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    long long ans = 0;
    long long len = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= q) {
            len++;
        } else {
            if (len >= k) {
                ans += (len - k + 1) * (len - k + 2) / 2;
            }
            len = 0;
        }
    }
    if (len >= k) {
        ans += (len - k + 1) * (len - k + 2) / 2;
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
