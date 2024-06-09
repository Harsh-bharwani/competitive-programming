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
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int index=-1;
if(0!=a[n-1]-a[1]){
    index=0;
}
else{
    for (int  i = 1; i < n; i++)
    {
        int r1=a[i]-a[0];
        for(int j=i+1;j<n;j++){
            int r2=a[n-1]-a[i+1];
            if(r1!=r2){
                index=i;
                break;
            }
        }

    }
}
string s;
for(int i=0;i<index+1;i++){
    s.append("R");
}
for(int i=index+1;i<n;i++){
    s.append("B");
}
if(s[0]=='B'){
    cout<<"NO"<<"\n";
}
else{
    cout<<"YES"<<"\n";
    cout<<(s)<<"\n";
}


}
}
