/*
 * @lc app=leetcode.cn id=20 lang=java
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
    public boolean isValid(String s) {
        int len = s.length();
        if (len % 2 == 1) {
            return false;
        }

        Deque<Character> deque = new LinkedList<>();
        char ch;
        for (int i = 0; i < len; i++) {
            ch = s.charAt(i);
            if (ch == '(') {
                deque.push(')');
            } else if (ch == '{') {
                deque.push('}');
            } else if (ch == '[') {
                deque.push(']');
            } else if (deque.isEmpty() || deque.peek() != ch) { // 根据有效的括号组合规则，它必须与最近未匹配的左括号相匹配，所以必须与栈顶的元素相匹配
                return false;
            } else {
                deque.pop();
            }
        }

        // 最后判断栈中的元素是否匹配
        return deque.isEmpty();
    }
}
// @lc code=end

