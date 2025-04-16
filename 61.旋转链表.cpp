/*
 * @lc app=leetcode.cn id=61 lang=cpp
 *
 * [61] 旋转链表
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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next || k == 0) return head;

        // int length = 1;
        // ListNode *tail = head;
        // while (tail->next) {
        //     tail = tail->next;
        //     length++;
        // }
    
        // k = k % length;
        // if (k == 0) return head;
    
        // // 找到新尾巴的位置：第 length - k - 1 个节点
        // int steps_to_new_tail = length - k - 1;
        // ListNode *new_tail = head;
        // for (int i = 0; i < steps_to_new_tail; ++i) {
        //     new_tail = new_tail->next;
        // }
    
        // ListNode *new_head = new_tail->next;//新头节点
        // new_tail->next = nullptr;//断链
        // tail->next = head;//重连：原链表的最后一个节点连原头节点
    
        // return new_head;

        ListNode* p = head;
        ListNode* q = head;
        
        int num =0;
        for (ListNode *k = head; k!=nullptr; k = k->next)
        {
            num++;
        }
        
        k = k % num;
        
        for (int i = 0; i<k;i++)
        {
            p = p->next;
        }

        while (p->next!=nullptr)
        {
            q= q->next;
            p = p->next;
        }

        
        p->next = head;
        head = q->next;
        q->next = nullptr;
        return head;
    }
};
// @lc code=end
