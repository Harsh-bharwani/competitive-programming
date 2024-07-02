#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }    
        vector<int> coins1(n);
        vector<int> coins2(n);
        coins1[0]=0;
        coins1[1]=1;
        coins2[0]=0;
        for(int i=1,j=2;i<n-1 and j<n;i++,j++){
            if(abs(a[i]-a[i-1])>abs(a[i+1]-a[i])){
                coins1[j]=1;
                coins2[j-1]=abs(a[i]-a[i-1]);
            }
            else{
                coins1[j]=abs(a[i+1]-a[i]);
                coins2[j-1]= 1;
            }
        }
        coins2[n-1]=1;
        vector<int> prefix1(n);
        prefix1[0]=0;
        for(int i=1;i<n;i++){
            prefix1[i]=coins1[i]+prefix1[i-1];
        }
        vector<int> prefix2(n);
        prefix2[0]=0;
        for(int i=1;i<n;i++){
            prefix2[i]=coins2[i]+prefix2[i-1];
        }
        
        int m;
        cin>>m;
        while(m--){
            int x,y;
            cin>>x>>y;
            if(y>x){
                cout<<prefix1[y-1]-prefix1[x-1]<<'\n';
            }
            else{
                cout<<prefix2[x-1]-prefix2[y-1]<<'\n';
            }            
        }
}
}