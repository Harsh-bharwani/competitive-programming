#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--){
    string a;
    string b;
    cin>>a;
    cin>>b;
    int temp=a[0];
    a[0]=b[0];
    b[0]=temp;
    cout<<a<<" "<<b<<"\n";
}
}
