/*
 * @lc app=leetcode.cn id=77 lang=java
 *
 * [77] 组合
 */

// @lc code=start
class Solution {
    List<List<Integer>> res = new ArrayList<>();
    LinkedList<Integer> path = new LinkedList<>();
    public List<List<Integer>> combine(int n, int k) {
        backTracking(n, k, 1);
        return res;
    }

    private void backTracking(int n, int k, int startIndex) {
        // 触发结束条件
        if (path.size() == k) {
            res.add(new ArrayList<>(path));
            return;
        }

        for (int i = startIndex; i <= n - (k - path.size()) + 1; i++) {
            path.add(i);
            backTracking(n, k, i + 1);
            path.removeLast();
        }
    }
}
// @lc code=end

