#User function Template for python3

from typing import List

class Solution:
    def reverse(self,St): 
        # code here
        l=[]
        for i in range(len(St)):
            l.append(St.pop())
        for i in range(len(l)):
            St.append(l[i])

        
    
        
