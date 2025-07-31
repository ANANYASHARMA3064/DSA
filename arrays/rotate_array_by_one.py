# Difficulty: **Basic**Accuracy: **69.6%**Submissions: **322K+**Points: **1**Average Time: **20m**

# Given an array **arr**, rotate the array by one position in clockwise direction.

# **Examples:**

# ```
# Input:arr[] = [1, 2, 3, 4, 5]
# Output:[5, 1, 2, 3, 4]
# Explanation: If we rotate arr by one position in clockwise 5 come to the front and remaining those are shifted to the end.
# ```

# ```
# Input:arr[] = [9, 8, 7, 6, 4, 2, 1, 3]
# Output:[3, 9, 8, 7, 6, 4, 2, 1]
# Explanation: After rotating clock-wise 3 comes in first position.
# ```

# **Constraints:**1<=arr.size()<=1050<=arr[i]<=105
class Solution:
    def rotate(self, arr):
        rpointer=0
        for i in range(1,len(arr)):
            j=arr[i]
            arr[i]=arr[rpointer]
            arr[rpointer]=j