# Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
# for i in range(0,len(nums)+1):
#     if i not in nums:
#          return i
class Solution:
def missingNumber(self, nums: List[int]) -› int:
res = len (nums)
for i in range (len (nums)) :
res += (i - nums [i])
return res