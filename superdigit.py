def superdigit(n,k):
    def sod(n):
        if(n<10):
            return n
        else:
            return n%10 +sod(n//10)
    def superdigit1(n):
        if(n<10):
             return n
        else:
              return superdigit1(sod(n))
    sum=0
    for i in n:
        sum+=int(i)
    
    return superdigit1(sum*k)

   
print(superdigit("148",3))