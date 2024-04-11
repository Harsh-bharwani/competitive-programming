#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count2=0;
    int index2=0;
    for(int i=0;i<n;i++){
        if(a[i]==2){
            count2++;
        }
    }
    if(count2%2!=0){
        cout<<-1<<endl;
    }
    else{
        for(int i=0,j=1;i<n && j<=count2/2;i++){
            
            if(a[i]==2){
                    j++;
                    index2=i;
                }
            }
             cout<<++index2<<endl;
        }

    }
    
}
