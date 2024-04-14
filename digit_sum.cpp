#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int sum=0;
    while(N){
        sum+=N%10;
        N=N/10;
    }
    cout<<sum<<endl;
}