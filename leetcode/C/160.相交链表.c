/*
 * @lc app=leetcode.cn id=160 lang=c
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode* tailA=headA;
    struct ListNode* tailB=headB;

    int LengthA = 1;
    while(tailA->next)
    {
        LengthA++;
        tailA=tailA->next;
    }

    int LengthB = 1;
    while (tailB->next)
    {
        LengthB++;
        tailB=tailB->next;
    }
    
    //不相交
    int gap = abs(LengthA-LengthB);

    //长的先走差距步，再同时走找交点
    struct ListNode*longlist = headA;
    struct ListNode*shortlist = headB;
    if(LengthA<LengthB)
    {
        shortlist=headA;
        longlist=headB;
    }

    while (gap--)
    {
        longlist=longlist->next;
    }

    while(longlist != shortlist)
    {
        longlist=longlist->next;
        shortlist=shortlist->next;
    }

    return longlist;
    
    


}
// @lc code=end

