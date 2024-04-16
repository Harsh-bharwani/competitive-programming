#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count=0;
        int three_dots=false;
        for(int i=0;i<n-2;i++){
        if(a[i]=='.' && a[i+1]=='.' && a[i+2]=='.'){
            three_dots=true;
            count=2;
            break;
        }
        }
        for(int i=0;i<n;i++){
             if(a[i]=='.' && three_dots==false){
            count++;
        } 
        }
        cout<<count<<endl;
    // if(three_dots==true){
    //     cout<<2<<endl;
    // }
    // else{
    // cout<<count<<endl;
    // }
    }
}