/*
 * @lc app=leetcode.cn id=1 lang=java
 *
 * [1] 两数之和
 */

// @lc code=start
// 使用 HashMap 方法1
class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] res = new int[2];
        if (nums == null || nums.length == 0) {
            return res;
        }

        Map<Integer,Integer> map = new HashMap<>(); // 创建一个hashmap
        for (int i = 0; i < nums.length; i++) {
            int temp = target - nums[i]; // 遍历当前元素，并在 map 中寻找是否有匹配的 key
            if (map.containsKey(temp)) {
                res[0] = map.get(temp); // 查找 temp（key 值）
                res[1] = i; // value
                break;
            }
            map.put(nums[i],i); // 如果没找到匹配对，就把访问过的元素和下标加入到 map 中
        }
        return res;
    }
}

// 使用 HashMap 方法2
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer,Integer> indexMap = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int temp = target - nums[i]; // 记录当前的目标值的余数
            if (indexMap.containsKey(temp)) {
                return new int []{i, indexMap.get(temp)}; // indexMap.get(temp) 指的是 key，然后查找到对应的 value
            } else {
                indexMap.put(nums[i], i);
            }
        }
        return null;
    }
}
// @lc code=end

