#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<pair<long long,long long>> a(n);
        for(int i=0;i<n;i++){
            int x;
            cin >> x;
            a[i]={i+1,x};
        }
        for(long long i=0;i<n;i++){
            a[i].second%=k;
            if(a[i].second==0LL){
                a[i].second=k;
            }
        }
        sort(a.begin(),a.end(), [](pair<long long,long long> c,pair<long long,long long> b){
            if(c.second!=b.second) return c.second>b.second;
            return c.first<b.first;
        });

        for(auto it:a){
            cout << it.first << " ";
        }
        cout << endl;
    }
}
