#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   int ans=0;
   while(n!=0){
    int x=log2(n);
    n=n-pow(2,x);
    ans++;
   }
   cout<<ans<<'\n';
}