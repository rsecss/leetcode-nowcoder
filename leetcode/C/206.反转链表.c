/*
 * @lc app=leetcode.cn id=206 lang=c
 *
 * [206] 反转链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
   /*翻转指针
    //判断链表是否为空
    if(head == NULL)
    {
        return NULL;
    }
    
    struct ListNode* n1,*n2,*n3;
    n1=NULL;
    n2=head;
    n3=head->next;

    while(n2)
    {
        //翻转
        n2->next = n1;

        //迭代往后走
        n1=n2;
        n2=n3;
        if(n3)
        {
        n3=n3->next;
        }
    }
    return n1;
    */

   /*头插：取原链表中节点，头插到newhead新链表中*/
   struct ListNode*cur =head;
   struct ListNode*newhead = NULL;

   while(cur)
   {
    struct ListNode*next = cur->next;

    //头插
    cur->next = newhead;
    newhead = cur;

    //迭代往后走
    cur = next;
   }

   return newhead;

}
// @lc code=end

