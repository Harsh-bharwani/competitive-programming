#include <bits/stdc++.h>
using namespace std;
int solve(int x){
 
}
int main()
{
    int t;
cin>>t;
while(t--){
int n;
cin>>n;
string a;
cin>>a;
int temp=0;
bool flag=true;
for ( int i=0;i<a.size();i++){
    if (a[i] >= 'a' && a[i]<='z'){
        temp=i;
        break;
    }
}
 
for(int i=0;i<temp-1;i++){
    if (a[i]>a[i+1]){
        flag=false;
        break;
    }
}
 
for(int i=temp;i<n-1;i++){
    if (a[i]>a[i+1] || (a[i]>=0 && a[i]<=9)){
        flag=false;
    }
}
 
if (flag){
    cout<<"YES"<<"\n";
}
else{
    cout<<"NO"<<"\n";
}
 
 
}
}