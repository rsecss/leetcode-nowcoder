/*
 * @lc app=leetcode.cn id=704 lang=java
 *
 * [704] 二分查找
 * 左闭右开区间
 */

// @lc code=start
class Solution {
    public int search(int[] nums, int target) {
        int left = 0;
        int right = nums.length;
        while (left < right) { 
            int mid = left + ((right - left) >> 1);
            if (nums[mid] == target) {
                return mid;
            }
            else if ( nums[mid] < target) {
                left = mid + 1;
            }
            else if ( nums[mid] > target) {
                right = mid;
            }
        }
        return -1;
    }
}
// @lc code=end

