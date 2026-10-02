class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0;
        int x = 0;
        for(int i = 0; i<nums.size(); i++) {
            if(nums[i] != val) {
                nums[x] = nums[i];
                x++;
            }else {
                count++;
            }
        }
    return (nums.size() - count);
    }
};