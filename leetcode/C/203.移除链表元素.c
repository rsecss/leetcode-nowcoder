/*
 * @lc app=leetcode.cn id=203 lang=c
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *removeElements(struct ListNode *head, int val)
{
    struct ListNode *prev = NULL, *cur = head;
    while (cur)
    {
        if (cur->val == val)
        {
            if (cur == head)
            {
                head = cur->next;
                free(cur);
                cur = head;
            }
            else
            {
                // 删除
                prev->next = cur->next;
                free(cur);
                cur = prev->next;
            }
        }
        else
        {
            // 迭代往后走
            prev = cur;
            cur = cur->next;
        }
    }
    return head;
}
// @lc code=end
