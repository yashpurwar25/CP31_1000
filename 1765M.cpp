#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        long long ans_a=1,ans_b=n-1;
        for(long long i=0;i*i<n;i++){
            if(n%i==0){
                ans_a=n/i;
                ans_b=i;
            }
        }
        cout << ans_a << " " << ans_b;
    }
}
