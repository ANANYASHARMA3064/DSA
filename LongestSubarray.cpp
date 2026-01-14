class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int largest =0;
        for(int i =0;i<arr.size();i++){
            int summ =0;
            for (int j=i;j<arr.size();j++){
                summ+=arr[j];
                if(summ == k &&(largest<((j-i)+1))){
                    largest = (j-i)+1;
                }
            }
        }
    return largest;
        
    }
    
};
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0;
        for(int i =0;i<nums.size();i++){
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};