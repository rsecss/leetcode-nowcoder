/*
 * @lc app=leetcode.cn id=226 lang=java
 *
 * [226] 翻转二叉树
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

// DFS 递归，前后序遍历都可以，中序不行
// class Solution {
//     public TreeNode invertTree(TreeNode root) {
//         if (root == null) {
//             return null;
//         }
//         invertTree(root.left);
//         invertTree(root.right);
//         swapChildren(root);

//         return root;
//     }

//     private void swapChildren(TreeNode root) {
//         TreeNode temp = root.left;
//         root.left = root.right;
//         root.right = temp;
//     }
// }

// BFS
class Solution {
    public TreeNode invertTree(TreeNode root) {
        if (root == null) {
            return null;
        }
        ArrayDeque<TreeNode> deque = new ArrayDeque<>();
        deque.offer(root);

        while (!deque.isEmpty()) {
            TreeNode node = deque.poll();
            swap(node);
            if (node.left != null) {
                deque.offer(node.left);
            }
            if (node.right != null) {
                deque.offer(node.right);
            }
        }
        return root;
    }
    public void swap(TreeNode root) {
        TreeNode temp = root.left;
        root.left = root.right;
        root.right = temp;
    }   
}
// @lc code=end

