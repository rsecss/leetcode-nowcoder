/*
 * @lc app=leetcode.cn id=111 lang=java
 *
 * [111] 二叉树的最小深度
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
    /**
     * 递归法
     * 最小深度是指从根节点到最近叶子节点的最短路径上的边数
     *
     * @param root 二叉树的根节点
     * @return 二叉树的最小深度如果树为空，则深度为0
     */
    public int minDepth(TreeNode root) {
        // 如果根节点为空，树的深度为0
        if (root == null) {
            return 0;
        }

        // 递归计算左子树的最小深度
        int leftDepth = minDepth(root.left);
        // 递归计算右子树的最小深度
        int rightDepth = minDepth(root.right);

        // 如果左子树为空，则返回右子树的最小深度加1
        if (root.left == null) {
            return rightDepth + 1;
        }
        // 如果右子树为空，则返回左子树的最小深度加1
        if (root.right == null) {
            return leftDepth + 1;
        }

        // 返回左右子树中最小深度的较小值加1
        return Math.min(leftDepth, rightDepth) + 1;
    }

    /**
     * 迭代法，层序遍历
     * 
     * @param root 二叉树的根节点
     * @return 二叉树的最小深度
     */
    public int minDepth(TreeNode root) {
        // 如果根节点为空，树的深度为0
        if (root == null) {
            return 0;
        }

        // 使用队列来实现广度优先搜索
        Deque<TreeNode> deque = new LinkedList<>();
        // 将根节点入队
        deque.offer(root);
        // 初始化深度为0
        int depth = 0;

        // 当队列不为空时，继续遍历
        while (!deque.isEmpty()) {
            // 获取当前层的节点数量
            int size = deque.size();
            // 深度增加1
            depth++;
            // 遍历当前层的所有节点
            for (int i = 0; i < size; i++) {
                // 出队一个节点
                TreeNode node = deque.poll();
                // 如果该节点是叶子节点，则返回当前深度
                if (node.left == null && node.right == null) {
                    return depth;
                }
                // 如果节点有左子节点，将左子节点入队
                if (node.left != null) {
                    deque.offer(node.left);
                }
                // 如果节点有右子节点，将右子节点入队
                if (node.right != null) {
                    deque.offer(node.right);
                }
            }
        }

        // 如果遍历完所有节点后仍未找到叶子节点，则返回当前深度
        return depth;
    }
}
// @lc code=end

