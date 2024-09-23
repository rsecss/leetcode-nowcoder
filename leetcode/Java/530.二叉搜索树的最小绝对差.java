/*
 * @lc app=leetcode.cn id=530 lang=java
 *
 * [530] 二叉搜索树的最小绝对差
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

// 递归
class Solution {
    TreeNode pre; // 记录上一个遍历的节点
    int result = Integer.MAX_VALUE;
    public int getMinimumDifference(TreeNode root) {
        if (root == null) {
            return 0;
        }

        traversal(root);
        return result;
    }

    public void traversal(TreeNode root) {
        if (root == null) {
            return;
        }

        traversal(root.left);

        if (pre != null) {
            result = Math.min(result, root.val - pre.val);
        }
        pre = root;

        traversal(root.right);
    }
}

// 迭代
class Solution {
    TreeNode pre;
    public int getMinimumDifference(TreeNode root) {
        if (root == null) {
            return 0;
        }

        Stack<TreeNode> stack = new Stack<>();
        TreeNode cur = root;
        int result = Integer.MAX_VALUE;

        while (cur != null || !stack.isEmpty()) {
            if (cur != null) {
                stack.push(cur);
                cur = cur.left;
            } else {
                cur = stack.pop();
                if (pre != null) {
                    result = Math.min(result, cur.val - pre.val);
                }

                pre = cur;
                cur =cur.right;
            }
        }
        return result;
    }
}
// @lc code=end

