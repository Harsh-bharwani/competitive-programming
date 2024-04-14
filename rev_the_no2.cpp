#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    int rev=0;
    while(N){
        int temp=N%10;
    rev=rev*10 + temp;
    N=N/10;
    }
    cout<<rev<<endl;


}
