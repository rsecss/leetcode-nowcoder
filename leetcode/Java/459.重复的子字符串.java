/*
 * @lc app=leetcode.cn id=459 lang=java
 *
 * [459] 重复的子字符串
 */

// @lc code=start
class Solution {
    public boolean repeatedSubstringPattern(String s) {
        if (s.length() == 0) {
            return false;
        }

        int len = s.length();
        // 设置哨兵，使下标从 1 开始，这样 j 从 0 开始，也不用初始化了
        s = " " + s;
        char[] chars = s.toCharArray();
        int[] next = new int[len + 1];

        // 构造 next 数组过程，j 从 0 开始（空格），i 从 2 开始
        for (int i = 2, j = 0; i <= len; i++) {
            // 匹配不成功，j 回到前一位置 next 数组所对应的值
            while (j > 0 && chars[i] != chars[j + 1]) {
                j = next[j];
            }
            // 匹配成功，j 往后移
            if (chars[i] == chars[j + 1]) {
                j++;
            }
            // 更新 next 数组的值
            next[i] = j;
        }

        // 最后判断是否是重复的子字符串，这里 next[len] 即代表 next 数组末尾的值
        // 数组长度减去最长相同前后缀的长度相当于是第一个周期的长度，也就是一个周期的长度，如果这个周期可以被整除，就说明整个数组就是这个周期的循环。
        if (next[len] > 0 && len % (len - next[len]) == 0)
        {
            return true;
        }
        return false;
    }
}
// @lc code=end

