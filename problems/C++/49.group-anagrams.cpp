/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        multimap<string, string> mp;
        vector<vector<string>> ans;
        set<string> keys;
        string key;
        int cnt = 0;

        for(int ii1=0; ii1<strs.size(); ii1++){
            key = strs[ii1];
            sort(key.begin(), key.end());
            mp.emplace(key, strs[ii1]);
            keys.insert(key);
        }

        for(auto itr1 = keys.begin(); itr1 != keys.end(); ++itr1){
            key = *itr1;
            auto elems = mp.equal_range(key);
            ans.emplace_back();
            for(auto itr2=elems.first; itr2 != elems.second; ++itr2){
                ans[cnt].push_back(itr2->second);
            }
            cnt++;
        }

        return ans;
    }
};
// @lc code=end

