class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, h = nums.size()-1;

        while(l<=h) {
            int mid = l + ((h-l)/2);
            if(nums[mid] == target) {
                return mid;
            } else if(nums[mid] < target) {
                l = mid+1;
            } else {
                h = mid-1;
            }
        }
        if(h >= 0 && target < nums[h]) return h;
        if(l<nums.size() && target > nums[l]) return l;
        return l;
    }
};