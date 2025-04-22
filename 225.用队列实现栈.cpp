/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
class MyStack
{
public:
    MyStack()
    {
        q1 = new queue<int>;
        q2 = new queue<int>;
    }

    ~MyStack()
    {
        delete q1;
        delete q2;
        q1 = nullptr;
        q2 = nullptr;
    }

    void push(int x)
    {
        q1->push(x);
        while (!q2->empty())
        {
            q1->push(q2->front());
            q2->pop();
        }
        queue<int> *p = q1;
        q1 = q2;
        q2 = p;
    }

    int pop()
    {
        int val = q2->front();
        q2->pop();
        return val;
    }

    int top()
    {
        int val = q2->front();
        return val;
    }

    bool empty()
    {
        return q2->empty();
    }

private:
    queue<int> *q1;
    queue<int> *q2;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end
