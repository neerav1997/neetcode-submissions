class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i < j) {
            if(!(tolower(s[i]) - 'a' >= 0 && tolower(s[i]) - 'a' < 26 ) &&
            !(s[i] - '0' >= 0 && s[i] - '0' < 10)) {
                i++;
                continue;
            }
            if(!(tolower(s[j]) - 'a' >= 0 && tolower(s[j]) - 'a' < 26 ) &&
            !(s[j] - '0' >= 0 && s[j] - '0' < 10)) {
                j--;
                continue;
            }

            if(tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }


           
    
};
