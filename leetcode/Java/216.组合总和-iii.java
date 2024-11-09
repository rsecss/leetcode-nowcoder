/*
 * @lc app=leetcode.cn id=216 lang=java
 *
 * [216] 组合总和 III
 */

// @lc code=start
class Solution {
    List<List<Integer>> res = new ArrayList<>();
    LinkedList<Integer> path = new LinkedList<>();
    public List<List<Integer>> combinationSum3(int k, int n) {
        build (k, n, 1, 0);
        return res;
    }

    private void build (int k, int targetSum, int startIndex, int sum) {
        // 剪枝
        if (sum > targetSum)
            return;
        if (path.size() > k)
            return;

        if (sum == targetSum && path.size() == k) {
            res.add(new ArrayList<>(path));
            return;
        }

        for (int i = startIndex; i <= 9; i++) {
            path.add(i);
            sum += i;
            build(k, targetSum, i + 1, sum);
            sum -= i;
            path.removeLast();
        }
    }
}
// @lc code=end

