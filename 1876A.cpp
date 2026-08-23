#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long t;
    if (!(cin >> t)) return 0;
    
    while(t--){
        long long n, p;
        cin >> n >> p;
        
        vector<pair<long long, long long>> v(n);
        vector<long long> a(n);
        vector<long long> b(n);
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        
        
        for(int i = 0; i < n; i++){
            v[i] = {b[i], a[i]};
        }
        
        sort(v.begin(), v.end());
      
        long long total_cost = p; 
        long long shared = 1;
        
        for(auto it : v){
          
            long long can_be_shared = it.second; 
            long long sharing_cost = it.first;
            
            if(sharing_cost >= p) break;
            
            if(shared + can_be_shared > n){
              
                total_cost += (n - shared) * sharing_cost;
                shared = n;
                break;
            } else {
                
                total_cost += sharing_cost * can_be_shared;
                shared += can_be_shared;
            }
        }

        total_cost += (n - shared) * p;
        cout << total_cost << "\n";
    }
    return 0;
}
