class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 1;
        int x = nums[0];

        for (int i = 1; i<nums.size(); i++) {
            if(nums[i] != x) {
                count--;
                if(count == 0) {
                    x = nums[i];
                    count = 1;
                }
            } else {
                count++;
            }
        }

        return x;
    }

};