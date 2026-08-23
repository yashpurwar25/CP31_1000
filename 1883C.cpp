#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long ans;
        if (k != 4) {
            ans = LLONG_MAX;
            for (int i = 0; i < n; i++) {
                long long cost = (k - a[i] % k) % k;
                ans = min(ans, cost);
            }
        } else {
            long long cost1 = LLONG_MAX;
            for (int i = 0; i < n; i++) {
                long long cost = (4 - a[i] % 4) % 4;
                cost1 = min(cost1, cost);
            }
            vector<int> evenCost(n);
            for (int i = 0; i < n; i++) evenCost[i] = a[i] % 2;
            sort(evenCost.begin(), evenCost.end());
            long long cost2 = evenCost[0] + evenCost[1];

            ans = min(cost1, cost2);
        }
        cout << ans << "\n";
    }
}
