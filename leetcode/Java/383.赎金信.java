/*
 * @lc app=leetcode.cn id=383 lang=java
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        if (ransomNote.length() > magazine.length()) {
            return false;
        }

        // 定义一个哈希数组
        int[] record = new int[26];
        
        // 遍历
        for (char i : magazine.toCharArray()) {
            record[i - 'a'] += 1; // 保存当前字符与 a 的相对差值
        }

        for (char i : ransomNote.toCharArray()) {
            record[i - 'a'] -= 1;
        }

        // 检查数组中是否存在负数
        for (int i : record) {
            if (i < 0) {
                return false;
            }
        }

        return true;
    }
}
// @lc code=end

