class Solution {
public:
    void reverseString(vector<char>& s) {
        int sss = s.size();
        for(int i =0; i<(sss/2); i++) {
            char temp = s[i];
            s[i] = s[sss - i - 1];
            s[sss - i - 1] = temp;
        }
    }
};