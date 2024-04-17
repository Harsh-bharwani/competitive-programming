#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int prime[n*n+1];
    for(int i=0;i<=n*n;i++){
        prime[i]=1;
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==1){
            for(int j=i*i;j<=n*n;j+=i){
                prime[j]=0;
            }
        }

    }
    int prime_count=0;
    
    for(int i=2;i<=n*n && prime_count<n;i++){   
        if(prime[i]==1){
            cout<<i<<" ";
            prime_count++;
        }
    }

}
