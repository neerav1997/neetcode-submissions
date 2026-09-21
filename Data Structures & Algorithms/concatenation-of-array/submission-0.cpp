class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int s = size(nums);
        for(int i = 0; i<(2*s); i++) {
            ans.push_back(nums[i%s]);
        }
        return ans;
    }
};