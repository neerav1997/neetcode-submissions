class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i = 0;
        while(1) {
            char c = strs[0][i];
            for(string s : strs) {
                if(s.length() == i || c != s[i]) {
                    return s.substr(0, i);
                } 
            }
            i++;
        }
    }
};