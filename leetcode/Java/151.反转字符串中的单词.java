/*
 * @lc app=leetcode.cn id=151 lang=java
 *
 * [151] 反转字符串中的单词
 */

// @lc code=start
/* 双指针法 */
class Solution {
    public String reverseWords(String s) {
        s = s.trim(); // 删除首尾空格
        int j = s.length() - 1;
        int i = j;
        StringBuilder res = new StringBuilder(); // StringBuilder 类是用于构建可变字符串的类
        while (i >= 0) {
            while (i >= 0 && s.charAt(i) != ' ') { // 获取首个空格
                i--;
            }
            // s.substring(i + 1, j + 1)：表示索引 i + 1 开始（包含该位置的字符）直到索引 j + 1 结束（不包含该位置的字符）的子字符串。这里之所以使用 i + 1 和 j + 1，是因为索引是从 0 开始的，而 i 和 j 通常表示匹配的单词或子字符串的边界索引，因此我们需要将它们加 1 来获取正确的子字符串。
            // append 方法用于将一个或多个字符串添加到 StringBuilder 对象的末尾
            res.append(s.substring(i + 1, j + 1) + ' '); // 添加单词
            while (i >= 0 && s.charAt(i) == ' ') { // 跳过单词间的空格
                i--;
            }
            j = i; // 指向下一个单词的尾字符
        }
        return res.toString().trim(); // 返回字符串并去除末尾空白字符
    }
}

/* 双端队列法（看的官方题解，对目前来说还是有点难理解） */
class Solution {
    public String reverseWords(String s) {
        int left = 0;
        int right = s.length() - 1;
        // 去除字符串开头的空白字符
        while (left <= right && s.charAt(left) == ' ') {
            left++;
        }

        // 去除字符串末尾的空白字符
        while (left <= right && s.charAt(right) == ' ') {
            right--;
        }

        Deque<String> deque = new ArrayDeque<String>();
        StringBuilder res = new StringBuilder();

        while (left <= right) {
            char ch = s.charAt(left);
            if (res.length() != 0 && ch == ' ') { // 单词的构建
                // 将字符串 push 到队列头部
                deque.offerFirst(res.toString()); // 将 res 中的内容添加到 deque 的头部
                res.setLength(0); // 清空 res
            } else if (ch != ' ') {
                res.append(ch);
            }
            left++;
        }
        deque.offerFirst(res.toString()); // 当循环结束后，res 中可能还保存着最后一个单词，因此需要将 res 的内容添加到 deque 的头部

        return String.join(" ",deque);
    }
}
// @lc code=end

