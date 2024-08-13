/*
 * @lc app=leetcode.cn id=349 lang=java
 *
 * [349] 两个数组的交集
 */

// @lc code=start
/* Hash 数组 */
class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        int[] hash1 = new int[1001];
        int[] hash2 = new int[1001];
        
        for (int i : nums1) {
            hash1[i]++;
        }
        for (int i : nums2) {
            hash2[i]++;
        }
        List<Integer> resList = new ArrayList<>();
        for (int i = 0; i < 1001; i++) {
            if (hash1[i] > 0 && hash2[i] > 0) {
                resList.add(i);
            }
        }

        int index = 0;
        int[] res = new int[resList.size()];
        for (int i : resList) {
            res[index] = i;
            index++;
        }
        return res;
    }
}

/* HashSet */
import java.util.HashSet;
import java.util.Set;

class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        if (nums1 == null || nums1.length == 0 || nums2 == null || nums2.length == 0) {
            return new int[0];
        }
        Set<Integer> set1 = new HashSet<>();
        Set<Integer> set2 = new HashSet<>();
        
        /* 遍历数组 1 和数组 2 */
        for (int i : nums1) {
            set1.add(i);
        }
        for (int i : nums2) {
            if (set1.contains(i)) {
                set2.add(i);
            }
        }

        // 重新申请一个数组存放 set2 中的元素，然后返回
        int[] arr = new int[set2.size()];
        int index = 0;
        for (int i : set2) {
            arr[index] = i;
            index++;
        }
        return arr;
    }
}
// @lc code=end

