#include<bits/stdc++.h> 
using namespace std; 
int main(){ 
    int t; 
    cin >> t; 
    while(t--){ 
        long long n, x; 
        cin >> n >> x; 
        vector<long long> ai; 
        ai.push_back(0); 
        for(int i = 0; i < n; i++){ 
            int point; 
            cin >> point; 
            ai.push_back(point); 
        } 
        ai.push_back(x); 
        n = ai.size(); 
        long long distance = INT_MIN; 
        for(int i = 1; i < n; i++){ 
            if(i == n - 1){ 
                distance = max(2 * (ai[i] - ai[i - 1]), distance); 
            } 
            else{ 
                distance = max((ai[i] - ai[i - 1]), distance); 
            } 
        } 
        cout << distance << "\n"; 
    } 
    return 0; 
}
