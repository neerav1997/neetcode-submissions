class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> map;
        for(int i = 0; i<nums.size(); i++) {
            map[nums[i]] = i;
        }

        int j = 0;
        for(int i : nums) {

           if (map.find(target - i) != map.end() && map[target - i] != j){
               return {j, map[target - i]};
            }
            j++;
        }
    }
};
