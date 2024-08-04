/*
 * @lc app=leetcode.cn id=160 lang=java
 *
 * [160] 相交链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */

// 法二: 先移动链表，后同步移动
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode curA = headA;
        ListNode curB = headB;
        int lengthA = 0;
        int lengthB = 0;

        // 求链表A的长度
        while (curA != null) {
            curA = curA.next;
            lengthA++;
        }

        // 求链表B的长度
        while (curB != null) {
            curB = curB.next;
            lengthB++;
        }

        curA = headA;
        curB = headB;

        // 假设 curA 为最长的链表头，lengthA 为长度
        if (lengthB > lengthA) {
            // 1. swap(lengthA,lengthB)
            int tempLength = lengthA;
            lengthA = lengthB;
            lengthB = tempLength;

            // 2. swap(curA,curB)
            ListNode tempNode = curA;
            curA = curB;
            curB = tempNode;
        }

        int gap = lengthA - lengthB; // 求长度差
        
        // 让 curA 和 curB 在同一起点上（末尾位置对齐）
        while (gap > 0) {
            curA = curA.next;
            gap--;
        }

        // 遍历curA 和 curB，遇到相同则直接返回
        while (curA != null) {
            if (curA == curB) {
                return curA;
            }
            curA = curA.next;
            curB = curB.next;
        }
        return null;
    }
}

// 法二: 合并链表并同步移动(感觉不容易想到)
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        ListNode curA = headA ;
        ListNode curB = headB;

        // 通过在遍历到链表末尾时切换链表，两个指针的总遍历长度相同
        // 由于 curA 和 curB 在遍历了相同长度的链表后，两个指针会同时到达交点
        while (curA != curB) {
            if (curA == null) {
                curA = headB;
            } else {
                curA = curA.next;
            }

            if (curB == null) {
                curB = headA;
            } else {
                curB = curB.next;
            }
        }
        return curA;
    }
}
// @lc code=end

