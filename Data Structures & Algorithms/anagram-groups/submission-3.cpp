class Solution {
public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 0) return vector<vector<string>>{};

        unordered_map<string, vector<string>> map;

        for(const auto& s : strs) {
            char c[26] = {0};
            for(char cc : s) {
                c[cc - 'a']++;
            }
            string key = to_string(c[0]);
            for(int i = 1; i<26; i++) {
                key += ',' + c[i];
            }

            map[key].push_back(s);
        }

        vector<vector<string>> ans;
        for(const auto m : map) {
            ans.push_back(m.second);
        }

        return ans;
    }
};
