/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution
{
public:
int calc(int left, int right, char sign)
{
    switch (sign)
    {
    case '+':
        return left + right;
    case '-':
        return left - right;
    case '*':
        return left * right;
    case '/':
        return left / right;
    }
    throw " ";
}
    int evalRPN(vector<string> &tokens)
    {
        stack<int> stack;
        for (string &str : tokens)
        {
            if (str.size() == 1 &&
                (str[0] == '+' || str[0] == '-' ||
                 str[0] == '*' || str[0] == '/'))
            {
                // 运算
                int right = stack.top();
                stack.pop();

                int left = stack.top();
                stack.pop();

                int val = calc(left, right, str[0]);
                stack.push(val);
            }
            else 
                {
                    // 遇到数字 string => int stoi stol
                    // int => sting  to_string()
                    stack.push(stoi(str));
                }
        }
        return stack.top();
    }
};
// @lc code=end
