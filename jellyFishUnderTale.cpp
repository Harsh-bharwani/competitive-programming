#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=a){
                sum+=arr[i];
            }
            else{
                count++;
            }
        }
        cout<<b-1 + sum + a*count<<'\n';

    }
}