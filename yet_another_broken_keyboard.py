n,k=map(int,input().split( ))
s=input()
c="".join(map(str,input().split( )))
sum=0
count=0
for char in s:
    if char in c:
        count+=1
    else:
        sum+=((count)*(count+1))//2
        count=0
if count!=0:
    sum+=((count)*(count+1))//2
print(sum)
    



