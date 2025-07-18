# Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

 

# Example 1:

# Input: nums = [1,2,3,4,5,6,7], k = 3
# Output: [5,6,7,1,2,3,4]
# Explanation:
# rotate 1 steps to the right: [7,1,2,3,4,5,6]
# rotate 2 steps to the right: [6,7,1,2,3,4,5]
# rotate 3 steps to the right: [5,6,7,1,2,3,4]
# Example 2:

# Input: nums = [-1,-100,3,99], k = 2
# Output: [3,99,-1,-100]
# Explanation: 
# rotate 1 steps to the right: [99,-1,-100,3]
# rotate 2 steps to the right: [3,99,-1,-100]

class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
        """
        k=k%len(nums)#because k can be bigger than the length of zeroes 
        l,r=0,len(nums)-1#l=0,r=6
        while l<r:#rotated the given array completely 
            nums[l],nums[r]=nums[r],nums[l]
            l,r=l+1,r-1
        l,r=0,k-1
        while l<r:#rotated the first k elements
            nums[l],nums[r]=nums[r],nums[l]
            l,r=l+1,r-1
        l,r=k,len(nums)-1
        while l<r:#rotated the rest of the k elements
            nums[l],nums[r]=nums[r],nums[l]
            l,r=l+1,r-1
        
        