#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    int a=n;
    int b=0;
    int min=INT_MAX;
    for(int i=n-1;i>0;i--){
        if(a>b){
            b+=i;
        }
        else{
            a+=i;
        }
    }
    cout<<abs(a-b);
}