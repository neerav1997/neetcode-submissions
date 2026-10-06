class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string answer;
        int i =0, j=0;
        int s1 = word1.size();
        int s2 = word2.size();
        while(i < s1 || j < s2) {
            if(i < s1) {
                answer += word1[i++];
            }
            if(j < s2) {
                answer += word2[j++];
            }
        }
        return answer;
    }
};