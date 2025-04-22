/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> cs;

        for(char ch : s)
        {
            if(ch == '(' || ch == '{' || ch == '[')
            {
                cs.push(ch);
            }
            else  
            {
                if(cs.empty() == 1){
                    return false;
                }

                char cmp = cs.top();
                cs.pop();

                if(ch == ')' && cmp!= '('
                || ch == '}' && cmp!= '{'
                || ch == ']' && cmp!= '['
                )
                {
                    return false;
                }
            }
        }
        return cs.empty();
    }
};
// @lc code=end

