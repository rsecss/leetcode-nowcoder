/*
 * @lc app=leetcode.cn id=454 lang=java
 *
 * [454] 四数相加 II
 */

// @lc code=start
class Solution {
    public int fourSumCount(int[] nums1, int[] nums2, int[] nums3, int[] nums4) {
        int count = 0;
        Map<Integer,Integer> map = new HashMap<>();

        // 统计两个数组中的元素之和，同时统计出现的次数，放入map
        for (int i = 0; i < nums1.length; i++) {
            for(int j = 0; j < nums2.length; j++) {
                int sumAB = nums1[i] + nums2[j];
                if (map.containsKey(sumAB)) {
                    map.put(sumAB,map.get(sumAB) + 1);
                } else {
                    map.put(sumAB,1);
                }
            }
        }

        // 统计剩余的两个元素的和，在map中找是否存在相加为0的情况(即 nums1[i] + nums2[j] = - (nums3[i] + nums4[j]))，同时记录次数
        for (int i = 0; i < nums3.length; i++) {
            for (int j = 0; j < nums4.length; j++) {
                int sumCD = - (nums3[i] + nums4[j]);
                if (map.containsKey(sumCD)) {
                    count += map.get(sumCD);
                }
            }
        }
        return count;
    }
}
// @lc code=end

