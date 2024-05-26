t=int(input())
for i in range(t):
    n,m=map(int,input().split( ))
    if n==m:
        print("YES")
    elif(n<m):
        print("NO")
    elif (n-m) %2==0:
        print("YES")
    else:
        print("NO")
        

