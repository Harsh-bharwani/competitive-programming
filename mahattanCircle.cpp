#include <bits/stdc++.h>
using namespace std;
int solve(int x){
 
}
int main()
{
    int t;
cin>>t;
while(t--){
int n,m;
cin>>n>>m;
char grid[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>grid[i][j];
    }
}
int l,h;
int row,col;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(grid[i][j]=='#'){
            l=i;
            col=j+1;
            break;
        }
    }
}
for(int i=n-1;i>=0;i--){
    for(int j=m-1;j>=0;j--){
        if(grid[i][j]=='#'){
            h=i;
            break;
        }
    }
}
if(h==l){
    row=l+1;
}
else{
    row=((l-h+2)/2) + h;
}
cout<<row<<" "<<col<<"\n";
}
}
