#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int one=0;
        int zero=0;
        int minus=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]==-1){
                minus++;
            }
            else if(a[i]==0){
                zero++;
            }
            else{
                one++;
            }
        }
        if(minus%2==0){
            cout << zero << endl;
        }
        else{
            cout << zero + 2 << endl;
        }
    }
}
