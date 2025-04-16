/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int p = 0;
        int q = nums.size() - 1;
        while(p <= q)
        {
           // 从后找不为val的值
            if (nums[q] == val)
           {
            q--;
           }
           // 从前找为val的值
           else if(nums[p] == val)
           {
            //交换并继续遍历
            nums[p] = nums[q];
            q--;
            p++;
           }
           else
           {
            p++;
           }
        }
        return p;
    }
};
// @lc code=end

