/*
 * @lc app=leetcode.cn id=28 lang=java
 *
 * [28] 找出字符串中第一个匹配项的下标
 */

// @lc code=start
// 法一：暴力求解，时间复杂度 O(n * m)
// class Solution {
//     public int strStr(String haystack, String needle) {
//         if (needle.length() == 0) {
//             return 0;
//         }
//         // 获取 haystack（文本串） 和 needle（模式串） 的长度
//         int n = haystack.length();
//         int m = needle.length();
//         // 将字符串转化成字符数组
//         char[] s = haystack.toCharArray();
//         char[] p = needle.toCharArray(); 

//         // 遍历 haystack 字符串
//         for (int i = 0; i < n - m + 1; i++) {
//             // 初始化匹配指针
//             int a = i;
//             int b = 0;
//             // 循环检查
//             while (b < m && s[a] == p[b]) {
//                 a++;
//                 b++;
//             }
//             // 如果 b 等于 m，说明 needle 已经完全匹配，返回当前位置 i
//             if (b == m) {
//                 return i;
//             }
//         }
//         // 如果遍历完毕仍未找到匹配的子串，则返回 -1
//         return -1;
//     }
// }

// 法二：KMP 算法——前缀表（不减一）——感觉真不好理解
class Solution {
    public int strStr(String haystack, String needle) {
        if (needle.length() == 0) {
            return 0;
        }
        int[] next = new int[needle.length()];
        getNext(next,needle); // getNext 方法计算模式串的最长相等前后缀长度
        
        int j = 0;
        for (int i = 0; i < haystack.length(); i++) {
            while (j > 0 && needle.charAt(j) != haystack.charAt(i)) {
                j = next[j - 1];
            }
            if (needle.charAt(j) = haystack.charAt(i)) {
                j++;
            }
            if (j == needle.length()) {
                return i - needle.length() + 1;
            }
        }
        return -1;
    }
    
    private void getNext(int[] next, String s) {
        // 初始化
        int j = 0;
        next[0] = 0;

        for (int i = 1; i < s.length(); i++) {
            // 前后缀不相同的情况
            while ( j > 0 && s.charAt(j) != s.charAt(i)) {
                j = next[j - 1];
            }
            // 前后缀相同
            if (s.charAt(j) = s.charAt(i)) {
                j++;
            }
            next[i] = j; // 循环第一次是如果上面都不满足，就直接执行这一步
        }
    }
}

// 法三：秒了
// class Solution {
//     public int strStr(String haystack, String needle) {
//         return haystack.indexOf(needle);
//     }
// }
// @lc code=end

