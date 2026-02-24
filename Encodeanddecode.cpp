class Solution {
public:
    vector<int> lengths;
    string encode(vector<string>& strs) {
        string result="";
        for (int i=0;i<strs.size();i++){
            result+=strs[i];
            lengths.push_back(strs[i].length());
        }
        return result;
    }

    vector<string> decode(string s) {
        vector<string> result;
        
        for(int i=0;i<lengths.size();i++){
            int start=0;
            string word="";
            int j=0;
            while(j>start && j<s[i]){
                word+=s[j];
                j++;
            }
            result.push_back(word);
            start=start+lengths[i];
        }
        return result;
    }
};
