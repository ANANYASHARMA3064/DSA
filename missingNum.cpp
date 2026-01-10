class Solution {
  public:
    int missingNum(vector<int>& arr) {
                int xorArr = 0, xorFull = 0;
        int n = arr.size() + 1; // total numbers including missing one

        for (int i = 0; i < arr.size(); i++) {
            xorArr ^= arr[i];
            xorFull ^= (i + 1);
        }

        xorFull ^= n;

        return xorArr ^ xorFull;
    }
};