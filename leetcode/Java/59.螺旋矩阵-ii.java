/*
 * @lc app=leetcode.cn id=59 lang=java
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
    public int[][] generateMatrix(int n) {
        int[][] nums = new int[n][n];
        int startX = 0, startY = 0; // 设置每一圈的起点
        int count = 1; // 矩阵中填写的数字
        int loop = 1; // 记录圈数
        int row,col; // row:行，col:列
        int offSet = 1; // 偏移量

        // 统一左闭右开
        while (loop <= n / 2) {
            // 顶部
            for(col = startY; col < n - offSet; col++) {
                nums[startX][col] = count++;
            }
            
            // 右侧
            for(row = startX; row < n - offSet; row++) {
                nums[row][col] = count++;
            }

            // 底部
            for(; col > startY; col--) {
                nums[row][col] = count++;
            }

            // 左侧
            for(; row > startX; row--) {
                nums[row][col] = count++;
            }

            startX++;
            startY++;
            offSet++;
            loop++;
        }
        if (n % 2 == 1) {
            nums[startX][startY] = count;
        }
    return nums;
    }
}
// @lc code=end

