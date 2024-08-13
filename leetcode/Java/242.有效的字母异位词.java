/*
 * @lc app=leetcode.cn id=242 lang=java
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution {
    public boolean isAnagram(String s, String t) {
        // 字典解法
        int[] record = new int[26];

        for (int i = 0; i < s.length(); i++) { 
            record[s.charAt(i) - 'a']++; // 只要求出一个相对数值就可以了
        }

        for (int i = 0; i < t.length(); i++) {
            record[t.charAt(i) - 'a']--; 
        }

        for (int count: record) { // record数组如果有的元素不为 0，说明字符串 s 和 t 一定是谁多了字符或者谁少了字符
            if (count != 0) {
                return false;
            }
        }
        return true;
    }
}
// @lc code=end

