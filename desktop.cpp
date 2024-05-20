#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    int sum=x+4*y ;
    sum=sum/15 +(sum%15 != 0) ;
    int space=(y+1)/2;
    cout<<max(sum,space)<<endl;
    }
}

