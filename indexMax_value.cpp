#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        long long maxx = 0;
        for (int i = 0; i < n; i++) {
            long long x;
            cin >> x;
            maxx = max(maxx, x);
        }
        
        for (int i = 0; i < m; i++) {
            char c;
            int l, r;
            cin >> c >> l >> r;
            
            if (l <= maxx && maxx <= r) {
                maxx += (c == '+') ? 1 : -1;
            }
            
            cout << maxx << ' ';
        }
        cout << '\n';
    }
    
    return 0;
}