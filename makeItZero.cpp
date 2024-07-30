#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         vector<int> v(n);
         for(int i=0; i < n; i++){
               cin>>v[i];
         }
         if(n%2==0){
            cout<<2<<'\n'<<1<<' '<<n<<'\n'<<1<<' '<<n<<'\n';
         }
         else{
            cout<<4<<'\n'<<1<<' '<<n-1<<'\n'<<1<<' '<<n-1<<'\n'<<n-1<<' '<<n<<'\n'<<n-1<<' '<<n<<'\n';
         }
   }
}
