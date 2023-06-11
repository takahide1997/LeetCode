/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        int comp;
        int size = nums.size();

        for(int ii1=0; ii1<size; ii1++){
            comp = target - nums[ii1];
            if(map.count(comp)){
                return {ii1, map[comp]};
            }
            map[nums[ii1]] = ii1;
        }

        return{};
        
    }
};
// @lc code=end

