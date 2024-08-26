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

// 双指针
class Solution {
    public String removeDuplicates(String s) {
        char[] ch = s.toCharArray();
        int fast = 0;
        int slow = 0;
        while (fast < s.length()) {
            // 直接用 fast 指针覆盖 slow 指针的值
            ch[slow] = ch[fast]; 
            // 遇到前相同的值，即 slow吗指针后退一步
            if (slow > 0 && ch[slow] == ch[slow - 1]) {
                slow--;
            } else {
                slow++;  
            }
            fast++;
        }

        return new String(ch, 0, slow);
    }
}

// @lc code=end

