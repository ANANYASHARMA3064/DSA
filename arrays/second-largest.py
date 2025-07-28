# Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

# Note: The second largest element should not be equal to the largest element.
class Solution:
    def getSecondLargest(self, arr):
        largest = -1
        secondlargest = -1

        for num in arr:
            if num > largest:
                secondlargest = largest
                largest = num
            elif largest > num > secondlargest:
                secondlargest = num

        return secondlargest 