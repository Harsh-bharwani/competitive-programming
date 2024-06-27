#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>> a(n,vector<char>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    int sum=0;
    string f="acef";
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            string s;
            s.push_back(a[i][j]);
            s.push_back(a[i+1][j]);
            s.push_back(a[i][j+1]);
            s.push_back(a[i+1][j+1]);
            sort(s.begin(),s.end());
            if(s==f){
                count++;
            }
        }
    
    }
    cout<<count<<'\n';
}