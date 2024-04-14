#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin>>t;
while(t--){
    int N;
    cin>>N;
    double n=0;
    while((int)(N/pow(10,n))){
        n++;
    }
    int a[(int)n];
    // int temp=n;
    for(int i=0;i<n;i++){
        a[i]=(int)N%10;
        N=N/10;
    }
    int f=0;
    for(int i=0;i<n;i++){
       if (a[i] == 0 && f != 1) continue;
if (a[i] != 0){
f = 1;
}
cout<<a[i];
    }
}
}