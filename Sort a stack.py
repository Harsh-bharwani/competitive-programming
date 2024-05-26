class Solution:
    # your task is to complete this function
    # function sort the stack such that top element is max
    # funciton should return nothing
    # s is a stack
    def Sorted(self, s):
        # Code here
        l=[]
        for i in range(len(s)):
            l.append(s.pop())
        l=sorted(l)
        for i in range(len(l)):
            s.append(l[i])
