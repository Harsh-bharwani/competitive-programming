#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, n, s;
        cin >> a >> b >> n >> s;
        if((a*n + b>=s) and s%n <=b){
            cout<<"YES"<<'\n';
        }
        else{
            cout<<"NO"<<'\n';
        }
        
    }
}
