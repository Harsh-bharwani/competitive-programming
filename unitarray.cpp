#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    int x=0,y=0;
    for(int j=0;j<n;j++){
        if(a[j]==1)
        x++;
        else y++;
    }
    int count=0;
    while(x<y || y%2!=0){
        x++;
        y--;
    count++;
    }
    cout<<count<<endl;
}
}