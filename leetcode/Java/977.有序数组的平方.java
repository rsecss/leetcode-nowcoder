/*
 * @lc app=leetcode.cn id=977 lang=java
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
    public int[] sortedSquares(int[] nums) {
        // 双指针法
        int right = nums.length - 1;
        int left = 0;
        int[] result = new int[nums.length];
        int index = result.length - 1;
        while (left <= right) {
            // 正数的相对位置是不变的， 需要调整的是负数平方后的相对位置
            if (nums[left] * nums[left] > nums[right] * nums[right]) {
                result[index] = nums[left] * nums[left];
                index--;
                left++;
            } else {
                result[index] = nums[right] * nums[right];
                index--;
                right--;
            }
        }
        return result;
    }
}
// @lc code=end

