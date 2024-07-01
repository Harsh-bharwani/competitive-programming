#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vector<int> diff(n);
    for(int i=0;i<n;i++){
        diff[i]=a[i]-b[i];
    }
    sort(diff.begin(),diff.end());
    long long sum=0;
    for(int i=0;i<n;i++){
        int index;
        if(diff[i]<=0){
            index= lower_bound(diff.begin(),diff.end(),abs(diff[i])+1)-diff.begin();
        }
        else{
            index=i+1;
        }
        sum+=n-index;
    }
    cout<<sum<<'\n';
    
}