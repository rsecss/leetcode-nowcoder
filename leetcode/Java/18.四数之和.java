/*
 * @lc app=leetcode.cn id=18 lang=java
 *
 * [18] 四数之和
 */

// @lc code=start
// 双指针法
class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        // 创建一个二维链表
        List<List<Integer>> result = new ArrayList<>();
        if (nums == null || nums.length < 4) {
            return result;
        }
        // 排序
        Arrays.sort(nums);

        for (int i = 0; i < nums.length; i++) {
            // 对 nums[i] 去重
            if (i > 0 && nums[i - 1] == nums[i]) {
                continue;
            }
            for (int j = i + 1; j < nums.length; j++) {
                // 对 nums[j] 去重
                if (j > i + 1 && nums[j-1] == nums[j]) {
                    continue;
                }

                int left = j + 1;
                int right = nums.length - 1;
                while (left < right) {
                    // nums[i] + nums[j] + nums[left] + nums[right] > target int 会溢出，所以这里要强制转换成 long 
                    long sum = (long) nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum < target) {
                        left++;
                    } else if (sum == target) {
                        result.add(Arrays.asList(nums[i], nums[j], nums[left], nums[right]));
                        // 对 nums[left] 和 nums[right] 去重
                        while (left < right && nums[left] == nums[left + 1]) {
                            left++;
                        }
                        while (left < right && nums[right] == nums[right - 1]) {
                            right--;
                        }
                        left++;
                        right--;
                    } else {
                        right--;
                    }
                }
            }
        }
        return result;
    }
}
// @lc code=end

