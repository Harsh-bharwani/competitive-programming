#include<iostream>
#include<string> 
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        int str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
        }
        int maxm=0;
        if (str[0]>(x-str[n-1])*2)
        maxm=str[0];
        else maxm=(x-str[n-1])*2;
        for(int i=0;i<n-1;i++){
          if(str[i+1]-str[i]>maxm)
          maxm=str[i+1]-str[i];
        }
        cout<<maxm<<endl;

}
}