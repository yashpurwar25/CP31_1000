#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long w, h;
    cin >> w >> h;
    int ka;
    cin >> ka;
    vector<long long> a(ka);
    for (int i = 0; i < ka; i++) cin >> a[i];
    int kb;
    cin >> kb;
    vector<long long> b(kb);
    for (int i = 0; i < kb; i++) cin >> b[i]; 
    int kc;
    cin >> kc;
    vector<long long> c(kc);
    for (int i = 0; i < kc; i++) cin >> c[i]; 
    int kd;
    cin >> kd;
    vector<long long> d(kd);
    for (int i = 0; i < kd; i++) cin >> d[i]; 
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    sort(d.begin(), d.end());
    long long ans = max({
        h * (a[ka - 1] - a[0]),
        h * (b[kb - 1] - b[0]),
        w * (c[kc - 1] - c[0]),
        w * (d[kd - 1] - d[0])
    });

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
