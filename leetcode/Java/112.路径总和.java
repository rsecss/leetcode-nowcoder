/*
 * @lc app=leetcode.cn id=112 lang=java
 *
 * [112] 路径总和
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if (root == null) {
            return false;
        }

        targetSum -= root.val;

        // 如果当前节点是叶子节点，并且 targetSum 为 0，则返回 true
        if (root.left == null && root.right == null) {
            return targetSum == 0;
        }

        // 分别检查左子树和右子树
        boolean left = false;
        boolean right = false;

        if (root.left != null) {
            left = hasPathSum(root.left, targetSum);
        }
        if (root.right != null) {
            right = hasPathSum(root.right, targetSum);
        }

        // 只要左子树或右子树有一条路径满足条件就返回true
        return left || right;
    }
}

// 迭代
class Solution {
    public boolean hasPathSum(TreeNode root, int targetSum) {
        if (root == null) {
            return false;
        }

        Stack<TreeNode> stack1 = new Stack<>();
        Stack<Integer> stack2 = new Stack<>();

        stack1.push(root);
        stack2.push(root.val);

        while (!stack1.isEmpty()) {
            TreeNode node = stack1.pop();
            int sum = stack2.pop();

            // 如果该节点是叶子节点，同时该节点的路径数值等于 sum，那么就返回 true
            if (node.left == null && node.right == null && sum == targetSum) {
                return true;
            }

            // 左节点，压进去一个节点的时候，将该节点的路径数值也记录下来
            if (node.left != null) {
                stack1.push(node.left);
                stack2.push(sum + node.left.val);
            }

            // 右节点，压进去一个节点的时候，将该节点的路径数值也记录下来
            if (node.right != null) {
                stack1.push(node.right);
                stack2.push(sum + node.right.val);
            }

        }
        return false;
    }
}
// @lc code=end

