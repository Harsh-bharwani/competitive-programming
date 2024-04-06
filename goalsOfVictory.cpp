#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int eff[n-1];
        for(int j=0;j<n-1;j++){
            cin>> eff[j];
        }
        int sum=0;
        for(int j=0;j<n-1;j++){
            sum+=eff[j];
        }
         cout<<-1*sum<<endl;
        }
    }

 
