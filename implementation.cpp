// # n,m=map(int,input().split(" "))

// # array=list(map(int,input().split(" ")))
// # query=list(map(int,input().split(" ")))

// # for x in query:
// #     flag=False
// #     l=0
// #     r=len(array)-1
// #     while(l<=r):
// #         m=(l+r)//2
// #         if x==array[m]:
// #             flag=True

// #         elif x > array[m]:
// #             l=m+1
// #         else:
// #             r=m-1
// #     if flag:
// #         print("YES")
// #     else:
// #         print("NO")

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {

        int x;
        cin >> x;
        bool flag = false;
        int l = 0;
        int r = n - 1;
        while (l <= r)
        {
            int m = (l + r) / 2;
            if (x == a[m])
            {
                flag = true;
                break;
            }
            else if (x > a[m])
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }
        if (flag==true){
            cout<<"YES"<<endl;;
        }
        else{
            cout<<"NO"<<endl;
        }
    }


}
