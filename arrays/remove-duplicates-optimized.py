class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        r=0
        for i in range(0,len(nums)):
            if nums[i]!=nums[r]:
                nums[r+1]=nums[i]
                r+=1
        return r+1