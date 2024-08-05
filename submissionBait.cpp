#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         int n;
         cin>>n;
         vector<int> v(n);
         map<int, int> freq;
         int maxx=0;
         for(int i=0; i < n; i++){
            cin>>v[i];
            freq[v[i]]++;
            maxx=max(maxx, v[i]);
        }
        if(freq[maxx]%2!=0){
            cout<<"YES"<<'\n';
        }
        else{
            int ct=0;
            for(const auto pair : freq){
                if(pair.second%2==1){
                    ct++;
                }
            }
            if(ct>0){
                cout<<"YES"<<'\n';
            }
            else{
                cout<<"NO"<<'\n';
            }
        }
        
   }
}
