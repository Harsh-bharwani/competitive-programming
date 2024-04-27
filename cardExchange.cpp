#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int c[n];
        for(int i=0;i<n;i++){
            cin>>c[i];
        }
        if(n<k){
            cout<<n<<endl;
            continue;
        }
        map<int, int> mp;
        for(int i=0;i<n;i++){
            mp[c[i]]+=1;
        }
        
        int max_map=1;
        for(int i=0;i<mp.size();i++){
            if(mp[i]>max_map){
                max_map=mp[i];
            }
        }
        if(max_map<k){
            cout<<n<<endl;
        }
        else{
            cout<<k-1<<endl;
        }  
        }
    }
