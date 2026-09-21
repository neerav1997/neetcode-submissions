class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int s = size(nums);
        for(int i = 0; i<s; i++) {
            for(int j = i+1; j<s; j++) {
                if((nums[i]^nums[j]) == 0) {
                    return true;
                }
            }
        }
        return false;
    }
};