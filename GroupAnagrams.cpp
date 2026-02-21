class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> mp;           // map sorted string → index in grid
        vector<vector<string>> grid;

        for(int i = 0; i < strs.size(); i++){
            string real = strs[i];              // original string
            string sortedStr = strs[i];         
            sort(sortedStr.begin(), sortedStr.end());  // sorted copy

            if(mp.count(sortedStr) == 0){
                grid.push_back({real});         // new group
                mp[sortedStr] = grid.size() - 1; 
            }
            else{
                int ind = mp[sortedStr];        // existing group
                grid[ind].push_back(real);      // append to that group
            }
        }

        return grid;
    }
};
// efficient solution


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const auto& s : strs) {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }
            res[key].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
    }
};