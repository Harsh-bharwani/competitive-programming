#We have to find the sum from i1,j1 to i2,j2 of a 2d matrix
matrix=[[1,2,3],[4,5,6],[7,8,9]]
i1=int(input())
j1=int(input())
i2=int(input())
j2=int(input())

#Creation of prefix sum matrix
prefix_sum= [[0]*len(matrix[0]) for x in range(len(matrix))]
for i in range(len(matrix)):
    for j in range(len(matrix[0])):
        if(i==0 and j==0):
            prefix_sum[i][j]=matrix[i][j]
        elif(i==0 and j>0):
            prefix_sum[i][j]=matrix[i][j]+prefix_sum[i][j-1]
        elif(j==0 and i>0):
            prefix_sum[i][j]=matrix[i][j] + prefix_sum[i-1][j]
        else:
            prefix_sum[i][j]=matrix[i][j]+prefix_sum[i-1][j]+prefix_sum[i][j-1]-prefix_sum[i-1][j-1]
if i1==0 and j1==0:
    sum_range=prefix_sum[i2][j2]
elif i1==0:
    sum_range=prefix_sum[i2][j2]-prefix_sum[i2][j1-1]
elif j1==0:
    sum_range=prefix_sum[i2][j2]-prefix_sum[i]
else:
    sum_range=prefix_sum[i2][j2]-prefix_sum[i1-1][j2]-prefix_sum[i2][j1-1]+prefix_sum[i1-1][j1-1]
print(sum_range)