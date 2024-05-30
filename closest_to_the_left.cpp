
#include <bits/stdc++.h>
using namespace std;
int check(int a, int x)
{
    if (a <= x)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < k; i++)
    {
        int l = -1;
        int r = n;
        int x;
        cin >> x;
        while (l + 1 < r)
        {
            int m = (l + r) / 2;
            if (check(a[m], x))
            {
                l=m;
            }
            else
            {
                r = m ;
            }
        }
        cout << l + 1 << "\n";
    }
}
