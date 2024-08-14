/*
 * @lc app=leetcode.cn id=344 lang=java
 *
 * [344] 反转字符串
 */

// @lc code=start
// 双指针法
class Solution {
    public void reverseString(char[] s) {
        int left = 0;
        int right = s.length - 1;
        while (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
}
// @lc code=end

