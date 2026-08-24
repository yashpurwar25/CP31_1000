#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> prefix(n+1, 0);
        vector<int> suffix(n+2, 0);

        unordered_set<char> str;
        for(long long i = 1; i <= n; i++){
            str.insert(s[i-1]);
            prefix[i] = str.size();
        }

        str.clear();
        for(long long i = n; i >= 1; i--){
            str.insert(s[i-1]);
            suffix[i] = str.size();
        }

        long long ans = 0;
        for(long long k = 1; k < n; k++){
            ans = max(ans, (long long)prefix[k] + suffix[k+1]);
        }
        cout << ans << "\n";
    }
    return 0;
}
