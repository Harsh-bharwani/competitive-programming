#include<iostream>
using namespace std;
int mod(int x){
    if(x>=0) return x;
    else return -1*x;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int min_mod_no=mod(a[0]);
    for(int i=0;i<n;i++){
        if(mod(a[i])<min_mod_no)
         min_mod_no=mod(a[i]);
        }
    cout<<min_mod_no;

}