#include <bits/stdc++.h>
using namespace std;

int solve(int v[],int a[],int n){
    int maxx=v[0]*a[1] + v[1]*a[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int product=v[i]*a[j] + v[j]*a[i];
            maxx=max(maxx,product);
        }
    }
    return maxx;
}
int main()
{
    int t;
cin>>t;
while(t--){
int n;
cin>>n;
int v[n];
int a[n];
    for(int i=0;i<n;i++){
        cin>>v[i]>>a[i];
    }
int ans=solve(v,a,n);
cout<<ans<<"\n";
}
}
