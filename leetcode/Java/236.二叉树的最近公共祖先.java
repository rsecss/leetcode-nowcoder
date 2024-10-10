/*
 * @lc app=leetcode.cn id=236 lang=java
 *
 * [236] 二叉树的最近公共祖先
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */

// 后序遍历（本题思路是自下而上思考，只能使用后序遍历）
class Solution {
    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        if (root == null || root == p || root == q) {
            return root;
        }

        // 后序遍历
        TreeNode left = lowestCommonAncestor(root.left, p, q);
        TreeNode right = lowestCommonAncestor(root.right, p, q);

        if (left ==null && right == null) { // 如没有找到节点 p 或 q 
            return null;
        } else if (left == null && right != null) { // 如果找到一个节点
            return right;
        } else if (left != null && right == null) { // 如果找到一个节点
            return left;
        } else { // 如果找到两个节点
            return root;
        }
    }
}
// @lc code=end

