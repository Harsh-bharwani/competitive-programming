#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        bool flag=true;
        if(n==1 and m==1){
            cout<<-1<<'\n';
        }
        else{
            for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(a[i][j]==n*m){
                    cout<<1<<' ';
                }
                else{
                    cout<<a[i][j]+1<<' ';
                }
            }
            cout<<'\n';
        }
    }
}
}
