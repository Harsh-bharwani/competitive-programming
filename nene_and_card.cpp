#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
int n;
cin>>n;
int a[n];
map<int,int>mp;
int count=0;
for(int i=0;i<n;i++){
    cin >> a[i];
}
for(int i=0;i<n;i++){
    mp[a[i]]+=1;
}
for (int i=0;i<mp.size();i++){
    if (mp[i] == 2){
        count++;
    }
}
cout<<count<<endl;
}
}