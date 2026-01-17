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
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        map<long long,int>preSumMap;
        long long sum =0;
        int maxlen=0;
        for(int i =0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==k){
                maxlen = max(maxlen,i+1);
                
            }
            long long rem = sum -k;
            if(preSumMap.find(rem) != preSumMap.end()){
                int len = i - preSumMap[rem];
                maxlen = max(maxlen,len);
            }
            if(preSumMap.find(sum)==preSumMap.end()){
                preSumMap[sum]=i;
            }
        }
        return maxlen;
    }
};
// busy day