/*
 * @lc app=leetcode.cn id=541 lang=java
 *
 * [541] 反转字符串 II
 */

// @lc code=start
class Solution {
    public String reverseStr(String s, int k) {
        char[] ch = s.toCharArray(); // 将字符串转化成数组
        for (int i = 0; i < ch.length; i += 2 * k) {
            int start = i;
            int end = Math.min(ch.length - 1, start + k - 1); // 判断尾数够不够 k 个取决于 end 指针的位置（这一步感觉非常巧妙）
            while (start < end) {
                char temp = ch[start]; 
                ch[start] = ch[end]; 
                ch[end] = temp;

                start++;
                end--;
            }
        }
    return new String(ch);
    }
}
// @lc code=end

