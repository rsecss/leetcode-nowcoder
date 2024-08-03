·   /*
 * @lc app=leetcode.cn id=19 lang=java
 *
 * [19] 删除链表的倒数第 N 个结点
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */

// 快慢指针
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        // 新建一个虚拟头节点
        ListNode dummyNode = new ListNode(0);
        dummyNode.next = head;
        // 快慢指针指向虚拟头节点
        ListNode fastIndex = dummyNode;
        ListNode slowIndex = dummyNode;

        // 只要快慢指针相差n个节点即可
        // 让快指针先走 n + 1 步的原因是为了确保当快指针到达链表的末尾时，慢指针正好在目标节点的前一个位置
        for (int i = 0; i <= n; i++) {
            fastIndex =fastIndex.next;
        }
        while (fastIndex != null) {
            fastIndex = fastIndex.next;
            slowIndex = slowIndex.next;
        }

        // 检查 slowIndex.next 是为了避免空指针的异常
        if (slowIndex.next != null) {
            slowIndex.next = slowIndex.next.next;
        }
        return dummyNode.next;
    }
}
// @lc code=end

