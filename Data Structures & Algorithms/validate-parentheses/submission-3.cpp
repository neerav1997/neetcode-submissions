class Solution {
public:
    bool isValid(string s) {
        vector<char> vec;
        for(const char &c : s) {
            if(vec.size() > 0 && ((c == ')' && vec.back() == '(') ||
                (c == '}' && vec.back() == '{') ||
                  (c == ']' && vec.back() == '['))){
                vec.pop_back();
            } else {
                vec.push_back(c);
            }
        }
        if(vec.size() == 0) {
            return true;
        }
        return false;
    }
};
