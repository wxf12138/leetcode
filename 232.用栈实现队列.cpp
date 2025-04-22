/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue
{
public:
    MyQueue()
    {
    }

    void push(int x)
    {
        s1.push(x);
    }

    int pop()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                int val1 = s1.top();
                s2.push(val1);
                s1.pop();
            }
        }
        int val2 = s2.top();
        s2.pop();
        return val2;
    }

    int peek()
    {
        if (s2.empty())
        {
            while (!s1.empty())
            {
                int val1 = s1.top();
                s2.push(val1);
                s1.pop();
            }
        }
        int val2 = s2.top();
        return val2;
    }

    bool empty()
    {
        return (s1.empty()) && (s2.empty());
    }

private:
    stack<int> s1;
    stack<int> s2;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
