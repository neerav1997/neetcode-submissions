class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) {
            return 1;
        }
        int i = 0, j = 0;
        while(j<nums.size()-1) {
            nums[i] = nums[j];
            while(j<nums.size()-1 && nums[j] == nums[j+1]) {
                j++;
            }
            if(j<nums.size()-1) {
                j++;
            }
            i++;
        }

        if(nums[j] != nums[j-1]){
        nums[i] = nums[j];
        return i+1;
    }
        
        return i;
    }
};