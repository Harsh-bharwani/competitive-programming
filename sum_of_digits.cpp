#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   double i=0;
while(int(n/pow(10,i))){
   i++;
}
// cout<<i;
int a[int(i)];
int sum=0;
for(int k=0;k<i;k++){
   sum+=n%10;
   n=n/10;
}
cout<<sum;
}