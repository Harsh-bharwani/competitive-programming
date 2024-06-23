// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        int mid;
        cin>>a>>b>>c;
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        cout<<abs(v[1]-v[0]) +  abs(v[1]-v[2])<<"\n";
    }

    return 0;
}