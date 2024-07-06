#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        vector<int> maximum(n);
        maximum[0]=v[0];
        for (int i = 1; i < n ; i++)
        {
            maximum[i]=max(maximum[i-1],v[i]);
        }
        long long sum=0;
        int max_diff=0;
        for(int i=0;i<n;i++){
            int diff=maximum[i]-v[i];
            sum+=diff;
            max_diff=max(max_diff,diff);
        }
        cout<<sum+max_diff<<'\n';
    }
}