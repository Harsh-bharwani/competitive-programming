#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x,y;
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<0<<endl;
    }
    else if(y==0){
        cout<<(x/15)+(x%15!=0)<<endl;
    }
    else if(x==0){
    cout<< (y+1)/2 <<endl;
    }
    else{int sum=x+4*y;
        if (sum%15==0){
        sum=sum/15;
        }
        else{
        sum=sum/15+1;
        }

        int space=(y+1)/2;
        cout<<max(sum,space)<<endl;
    }
    
}
}
