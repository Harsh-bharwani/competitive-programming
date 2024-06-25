#include <bits/stdc++.h>
using namespace std;
int f(long long x,long long w,long long h,long long n){
    if((x/h)*(x/w)>=n) return 1;
    else return 0;
}
int main()
{
    long long w,h,n;
    cin>>w>>h>>n;
    int flag=true;
    if(w==0 and h==0){
        cout<<0<<'\n';
        flag=false;
    }
    long long low=1;
    long long high=1;
    while(low<=high and flag==true){
        long long mid=low+(high-low)/2;
        if(f(mid,w,h,n)) {
            // true
            if(f(mid-1,w,h,n)){
                high=mid-1;
            }
            else{
                cout<< mid <<"\n";
                break;
            }

        }
        else{
            low=mid+1;
            high*=2;
        }
    }
}
