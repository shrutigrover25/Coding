class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        
        maxii=0
        count1=0;
        
        for i in range(len(nums)):
            if(nums[i]==1):
                count1+=1
                maxii=max(maxii,count1)
                
            else:
                count1=0
                
        return maxii
        