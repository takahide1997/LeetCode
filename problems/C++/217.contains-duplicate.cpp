/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> elems;
        int flag = 0;
        
        for(int ii1=0; ii1<nums.size(); ii1++){
            if(elems.find(nums[ii1]) != elems.end()){
                flag = 1;
                break;
            }
            elems.insert(nums[ii1]);
        }

        if(flag){
            return true;
        }else{
            return false;
        }
    }
};
// @lc code=end

