mat=[[1,1],[1,0]]
def mat_multiply(mat1,mat2):
    r1=len(mat1)
    r2=len(mat2)
    c1=len(mat1[0])
    c2=len(mat2[0])
    if(c1!=r2):
        return None
    else:
        c=[[0 for i in range(c2)] for j in range(r1)] 
        for i in range(r1):
            for j in range(c2):
                for k in range(c1):
                    c[i][j]+=mat1[i][k]*mat2[k][j]
        return c
def pow(mat,n):
    if(n==0):
        return [[1,0],[0,1]]
    if(n==1):
        return mat
    else:
        temp=pow(mat,n//2)
        multiply= mat_multiply(temp,temp)
        if(n%2==0):
            return multiply
        else:
            return mat_multiply(multiply,mat)

n=int(input())
power=pow(mat,n-1)
ans=mat_multiply(power,[[1],[0]])
print(ans[0])

