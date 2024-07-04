#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(y==0 or y==-1 or (y>0 and (y=2*abs(x) or x==0))){
            cout<<"YES"<<'\n';
        }          
        else cout<<"NO"<<'\n';
    }
}