/*
 * @lc app=leetcode.cn id=150 lang=java
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
    public int evalRPN(String[] tokens) {
        Deque<Integer> stack = new LinkedList<>();
        for (String s : tokens) {
            if ("+".equals(s)) {
                stack.push(stack.pop() + stack.pop());
            } else if ("-".equals(s)) {
                stack.push(-stack.pop() + stack.pop());
            } else if ("*".equals(s)) {
                stack.push(stack.pop() * stack.pop());
            } else if ("/".equals(s)) { // 这里使用临时变量的原因是：保证操作顺序，自左向右
                int temp1 = stack.pop();
                int temp2 = stack.pop();
                stack.push(temp2 / temp1); 
            } else {
                stack.push(Integer.valueOf(s)); // 将字符串转换成整数，后将其压入栈中
            }
        }
        return stack.pop();
    }
}
// @lc code=end

