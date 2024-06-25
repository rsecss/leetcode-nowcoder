/*
 * @lc app=leetcode.cn id=142 lang=c
 *
 * [142] 环形链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *slow=head, *fast=head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast)
        {
            //相遇
            struct ListNode *meet = slow;
            //公式，见笔记
            while(meet != head)
            {
                meet = meet->next;
                head = head->next;
            }
            return meet;
        }
    } 
    return NULL;
}
// @lc code=end

