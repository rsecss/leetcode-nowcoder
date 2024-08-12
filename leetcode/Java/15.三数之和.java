/*
 * @lc app=leetcode.cn id=15 lang=java
 *
 * [15] 三数之和
 */

// @lc code=start
// 双指针法(感觉这里去重有点难理解)
class Solution {
    public List<List<Integer>> threeSum(int[] nums) {
        List<List<Integer>> result = new ArrayList<>(); // 创建一个二维列表
        // 判空
        if (nums == null || nums.length < 3) {
            return result;
        }
        Arrays.sort(nums); // 排序
    
        // 找出a + b + c = 0
        // a = nums[i], b = nums[left], c = nums[right]
        for (int i = 0; i < nums.length; i++) {
            // 排序之后如果当前数字已经大于零，那么无论如何组合都不可能凑成三元组，直接返回结果
            if (nums[i] > 0) {
                return result;
            }

            // 对a 去重
            if (i > 0 && nums[i] == nums[i - 1]) { 
                continue;
            }

            int left = i + 1;
            int right = nums.length - 1;
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                if (sum == 0) {
                    result.add(Arrays.asList(nums[i], nums[left], nums[right]));
                    // 去重逻辑应该放在找到一个三元组之后，对b 和 c去重
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    while ( left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    right--;
                    left++;
                } else if (sum < 0) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return result;
    }
}
// @lc code=end

