class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mpp;
        mpp['I'] = 1;
        mpp['V'] = 5;
        mpp['X'] = 10;
        mpp['L'] = 50;
        mpp['C'] = 100;
        mpp['D'] = 500;
        mpp['M'] = 1000;

        int i = 0;
        int res = 0;

        while(i < s.size()){
            char c = s[i];
            if(i == s.size()-1){
                res += mpp[c];
                i++;
                continue;
            }
            if(mpp[c] < mpp[s[i+1]]){
                res += mpp[s[i+1]] - mpp[c];
                i += 2;
            }
            else{
                res += mpp[c];
                i++;
            }
        }

        return res;
    }
};