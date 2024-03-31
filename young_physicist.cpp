#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int x_sum=0;

int y_sum=0;

int z_sum=0;
    for(int i=0;i<n;i++){
int x=0,y=0,z=0;
cin>>x>>y>>z;
x_sum+=x;
y_sum+=y;
z_sum+=z;
    }

    if(x_sum==0 && y_sum==0 && z_sum==0)
    cout<<"YES";
    else 
    cout<<"NO";
}