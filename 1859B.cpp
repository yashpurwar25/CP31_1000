#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> second_element;
        long long lowest_first_element = -1;
        
        for (int i = 0; i < n; i++) {
            long long m;
            cin >> m;
            
            long long min1 = -1, min2 = -1;
            for (int j = 0; j < m; j++) {
                long long val;
                cin >> val;
                if (min1 == -1 || val < min1) {
                    min2 = min1;
                    min1 = val;
                } else if (min2 == -1 || val < min2) {
                    min2 = val;
                }
            }
            
            second_element.push_back(min2);
            if (lowest_first_element == -1 || min1 < lowest_first_element) {
                lowest_first_element = min1;
            }
        }
        
        sort(second_element.begin(), second_element.end());
        long long sum_of_second_elements = 0;
        for (long long x : second_element) {
            sum_of_second_elements += x;
        }
        
        long long lowest_second_minimum = second_element[0];
        long long answer = sum_of_second_elements + lowest_first_element - lowest_second_minimum;
        cout << answer << "\n";
    }
    return 0;
}
1
