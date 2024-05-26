
n,m=map(int,input().split( ))

s=input()
t=input()
p=[]

i=0
j=0
while(i<n and j<m):
    if s[i]==t[j]:
        p.append(i)
        j+=1
    i+=1

maxx=p[1]-p[0]
for i in range(len(p)-1):
    maxx=max(p[i+1]-p[i],maxx)

i=n-1
j=m-1
while(i>=0 and j>0):
    if (s[i]==t[j]):
        p[j]=i
        maxx=max(p[j]-p[j-1],maxx)
        j=j-1
    i-=1


print(maxx)




