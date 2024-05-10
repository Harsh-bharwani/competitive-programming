a=[[1,2,3],[4,5,6],[7,8,9]]
prefix_sum= [[0]*len(a[0]) for x in range(len(a))]
for i in range(len(a)):
    for j in range(len(a[0])):
        if(i==0 and j==0):
            prefix_sum[i][j]=a[i][j]
        elif(i==0 and j>0):
            prefix_sum[i][j]=a[i][j]+prefix_sum[i][j-1]
        elif(j==0 and i>0):
            prefix_sum[i][j]=a[i][j] + prefix_sum[i-1][j]
        else:
            prefix_sum[i][j]=a[i][j]+prefix_sum[i-1][j]+prefix_sum[i][j-1]-prefix_sum[i-1][j-1]
print(prefix_sum)
