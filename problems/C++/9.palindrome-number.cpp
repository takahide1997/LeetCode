/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        long long x_forward;
        long long x_reverse;

        x_forward = x;
        x_reverse = 0;

        if(x < 0){
            return false;
        }

        while (x)
        {
            x_reverse *= 10;
            x_reverse += x%10;
            x /= 10;
        }
        
        if(x_forward == x_reverse){
            return true;
        }else{
            return false;
        }
        
    }
};
// @lc code=end

