/*
 * @lc app=leetcode.cn id=209 lang=java
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        //滑动窗口法
        int left = 0;
        int sum = 0;
        int result = Integer.MAX_VALUE;

        // 遍历数组，右指针为 right
        for (int right = 0; right < nums.length; right++) {
            sum += nums[right];

            // 当窗口和大于等于 target 时，尝试从左缩小窗口
            while (sum >= target) {
                result = Math.min(result, right - left + 1); //保留原来的最小数组的的大小，后相继比较，最后选出最小数组
                sum -= nums[left++]; // 从窗口中移除左侧元素并移动左指针
            }
        }
        return result == Integer.MAX_VALUE ? 0 : result;
    }
}
// @lc code=end

