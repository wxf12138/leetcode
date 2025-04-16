/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        // 新建头节点
        ListNode *head_ = new ListNode(0);
        head_->next = head;
        ListNode *pre = head_;
        ListNode *p = head_;
        while (n--)
        {
            if (p == nullptr)
                return head;
            p = p->next;
        }
        while (p->next != nullptr)
        {
            p = p->next;
            pre = pre->next;
        }

        struct ListNode *temp = pre->next;
        pre->next = pre->next->next;
        delete (temp);

        return head_->next;
    }
};
// @lc code=end
