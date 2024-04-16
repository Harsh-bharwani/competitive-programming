#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];

    int i=0;
        for(int j=2;i<n;j++){
            int count=0;
            for(int k=2;k<=sqrt(j);k++){
                if(j%k==0){
                    count++;
                    break;
                }
            }
            if(count==0){
                a[i]=j;
                i++;
            }
        }
    for(int p=0;p<n;p++){
        cout<<a[p]<<" ";
    }
}