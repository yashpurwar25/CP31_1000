#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        map<long long, int> max_a;
        map<long long, int> max_b;
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int count = 1;
        for(int i=1; i<n; i++){
            if(a[i] == a[i-1]){
                count++;
            } else {
                max_a[a[i-1]] = max(count, max_a[a[i-1]]);
                count = 1;
            }
        }
        if(n > 0) max_a[a[n-1]] = max(count, max_a[a[n-1]]);
        count = 1; 
        for(int i=1; i<n; i++){
            if(b[i] == b[i-1]){
                count++;
            } else {
                max_b[b[i-1]] = max(count, max_b[b[i-1]]);
                count = 1;
            }
        }
        if(n > 0) max_b[b[n-1]] = max(count, max_b[b[n-1]]);
        int max_freq = 0;
        for(int i=0; i<n; i++){
            max_freq = max(max_freq, max_a[a[i]] + max_b[a[i]]);
        }
        for(int i=0; i<n; i++){
            max_freq = max(max_freq, max_a[b[i]] + max_b[b[i]]);
        }
        
        cout << max_freq << endl;
    }
    return 0;
}
