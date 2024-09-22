/*
 * @lc app=leetcode.cn id=98 lang=java
 *
 * [98] 验证二叉搜索树
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

// 迭代（没怎么理解）
class Solution {
    public boolean isValidBST(TreeNode root) {
        if (root == null) {
            return true;
        }
        Stack<TreeNode> stack = new Stack<>();
        TreeNode node = null;
        while (root != null || !stack.isEmpty()) {
            while (root != null) {
                stack.push(root);
                root = root.left; // 左
            }

            TreeNode pop = stack.pop();
            if (node != null && pop.val <= node.val) {
                return false;
            }
            node = pop;

            root = pop.right;
        }
        return true;
    }
}

// 递归
class Solution {
    public boolean isValidBST(TreeNode root) {
        return validBST(Long.MIN_VALUE, Long.MAX_VALUE, root);
    }

    private boolean validBST(long lower, long upper, TreeNode root) {
        if (root == null) {
            return true;
        }
        if (lower >= root.val || upper <= root.val) {
            return false;
        }

        return validBST(lower, root.val, root.left) && validBST(root.val, upper, root.right);
    }
}
// @lc code=end

