/*
 * @lc app=leetcode.cn id=27 lang=java
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
    public int removeElement(int[] nums, int val) {
    
        //法一：快慢指针
        int slowIndex = 0;
        for (int fastIndex = 0; fastIndex < nums.length; fastIndex++) {
            if (nums[fastIndex] != val) {
                nums[slowIndex] = nums[fastIndex];
                slowIndex++;
            }
        }
        return slowIndex;

        //法二：相向指针法
        int left = 0;
        int right = nums.length - 1;
        while (left <= right) {
            if(nums[left] == val) {
                nums[left] = nums[right];
                right--;
            } else {
                // 这里兼容了right指针指向的值与val相等的情况
                left++;
            }
        }
        return left;
    }
}
// @lc code=end

