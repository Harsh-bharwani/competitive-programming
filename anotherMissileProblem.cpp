#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    float p[n];
    int a[n];
    float sum=0;
    float res[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]>=m){
            sum+=p[i];
        }
    }
    for(int i=0;i<n;i++){

        if(a[i]<m){
            res[i]=0;
        }
        else{
            res[i]=p[i]/sum;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<fixed<<setprecision(6)<<res[i]<<' ';
    }
}