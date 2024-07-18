#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s1,t1;
        cin>>s1;
        cin>>t1;
        vector<int> s(n), t(n);
        
        for (int i = 0; i < n; i++) {
            s[i]=s1[i]-'0';
        }
        
        for (int i = 0; i < n; i++) {
            t[i]=t1[i]-'0';
        }
        vector<int> ct(n);
        ct[0] = s[0];
        for (int i = 1; i < n; i++) {
            ct[i] = ct[i-1] + s[i];
        }
        
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == 0 && t[i] == 1 && ct[i] < 1) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;

}