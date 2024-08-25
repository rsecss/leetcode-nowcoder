/*
 * @lc app=leetcode.cn id=1047 lang=java
 *
 * [1047] 删除字符串中的所有相邻重复项
 */

// @lc code=start
// 法一：使用 Deque 作为堆栈
class Solution {
    public String removeDuplicates(String s) {
        ArrayDeque<Character> deque = new ArrayDeque<>();
        char ch;
        for (int i = 0; i < s.length(); i++) {
            ch = s.charAt(i);
            if (deque.isEmpty() || deque.peek() != ch) {
                deque.push(ch);
            } else {
                deque.pop();
            }
        }
        String str = "";
        // 把栈中剩余的元素 pop 出来
        while (!deque.isEmpty()) {
            str = deque.pop() + str;
        }
        return str;
    }
}
// @lc code=end

