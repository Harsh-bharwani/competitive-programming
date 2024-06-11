#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int maxi=0;
    int max_ind=0;
    for(int i=2;i<=n;i++){
        int sum=0;
        for(int j=1;i*j<=n;j++){
            sum+=i*j;
        }
        if(sum>maxi){
            maxi=sum;
            max_ind=i;
        }
    }
    cout<<max_ind<<"\n";
    }
}
