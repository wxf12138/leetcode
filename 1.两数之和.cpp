/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; // 用于存储数字及其索引
        vector<int> result; // 用于存储结果

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // 计算补数
            if (num_map.find(complement) != num_map.end()) { // 如果补数在哈希表中
                result.push_back(num_map[complement]); // 添加补数的索引
                result.push_back(i); // 添加当前数字的索引
                return result; // 返回结果
            }
            num_map[nums[i]] = i; // 将当前数字及其索引存入哈希表
        }

        return result; // 如果没有找到，返回空向量
    }
};
// @lc code=end

