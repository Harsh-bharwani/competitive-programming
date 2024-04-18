class Solution(object):
    def singleNumber(self, nums):
        self.nums=nums
        sum=0
        for i in range(len(self.nums)):
            sum^=self.nums[i]
        return sum    
