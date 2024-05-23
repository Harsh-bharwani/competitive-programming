class Node:
    def __init__(self,data,next=None):
        self.data=data
        self.next=next
class stack:
    def __init__(self):
        self.__size=0
        self.__head=None
    def size(self):
        return self.__size
    def is_empty(self):
        return self.__size==0

    def push(self,value):
        newnode=Node(value)
        # if self.is_empty():
        #     self.__head=newnode
        # newnode.next=self.__head  
        newnode.next=self.__head  
        self.__head=newnode    #rest cases already handled
        self.__size+=1
    def top(self):
        if self.is_empty():
            raise "Empty stack"
        return self.__head.data
    def pop(self):
        if self.is_empty():
            raise "Empty stack"
        temp=self.__head
        self.__head=self.__head.next
        data=temp.data # to return the value of the popped element
        del(temp)
        self.__size-=1
        # return data
    def __str__(self):
        l=[]
        trav=self.__head
        while(trav!=None):
            l.append(str(trav.data))
            trav=trav.next
        return "->".join(l)
st=stack()
s=input()
count=0
for i in range(len(s)):
    if st.size()!=0 and s[i]==st.top():
        st.pop()
        count+=1
    else:
        st.push(s[i])
if count%2==0:
    print("No")
else:
    print("Yes")


