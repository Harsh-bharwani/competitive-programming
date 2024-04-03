#include<iostream>  
#include<string>
using namespace std;
int main(){
int n,t;
cin>>n>>t;   
string a,b;
cin>>a;
b=a;
for (int j=0;j<t;j++){
for (int i=0;i<n;i++){
    if(a[i]=='B' && a[i+1]=='G'){
        b[i]='G';
        b[i+1]='B';
    }
}
a=b;
}
cout<<b;

}
