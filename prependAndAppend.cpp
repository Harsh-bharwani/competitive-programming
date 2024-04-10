#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin >> n;
        string a;
       cin>>a;
        int count=0;
        for(int j=0;j<n/2;j++){
            if((a[j] == '0' && a[n-1-j]== '1') || (a[j]=='1' && a[n-1-j]=='0')){
                count+=2;
            }
            else break;
        }
        
        cout<<n-count<<endl;
        
    }
}