class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(nums.size() == 1 && k!=0) return false;
        unordered_map<int, int> map;
        for(int i = 0; i<=k; i++) {
            if(map[nums[i]] >= 1) return true;
            map[nums[i]] = 1;
        }
        for(int i = k+1; i<nums.size(); i++) {
            map[nums[i-k-1]]--;
            map[nums[i]]++;
            if(map[nums[i]] > 1) return true;
            
        }
        return false;
    }
};