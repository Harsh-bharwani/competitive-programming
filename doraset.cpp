#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int ct=0;
        for(int i=l;i<=r-2;i++){
            if((i%2)==1 and (i+2)%2==1 and (i+1)%2==0){
                ct++;
                i+=2;
            } 
        }
        cout<<ct<<'\n';
   }
}