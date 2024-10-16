/*
 * @lc app=leetcode.cn id=108 lang=java
 *
 * [108] 将有序数组转换为二叉搜索树
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

// 递归法
class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        TreeNode root = traversal(nums, 0, nums.length - 1);

        return root;
    }

    // 左闭右闭区间 [left, right]
    private TreeNode traversal(int[] nums, int left, int right) {
        if (left > right) {
            return null;
        }

        int middle = left + ((right - left) >> 1);
        TreeNode root = new TreeNode(nums[middle]);

        root.left = traversal(nums, left, middle - 1);
        root.right = traversal(nums, middle + 1, right);
        
        return root;
    }
}

// 迭代法
class Solution {
    public TreeNode sortedArrayToBST(int[] nums) {
        // 判空
        if (nums.length == 0) {
            return null;
        }

        // 根节点初始化
        TreeNode root = new TreeNode(-1);
        Queue<TreeNode> nodeQueue = new LinkedList<>();
        Queue<TreeNode> leftQueue = new LinkedList<>();
        Queue<TreeNode> rightQueue = new LinkedList<>();

        // 根节点入队列
        nodeQueue.offer(root);
        // 0 为左区间下标初始位置
        leftQueue.offer(0);
        // nums.size() - 1 为右区间下标初始位置
        rightQueue.offer(nums.length - 1);

        // 左闭右闭区间
        while (!nodeQueue.isEmpty()) {
            TreeNode curNode = nodeQueue.poll();
            int left = leftQueue.poll();
            int right = rightQueue.poll();
            int middle = left + ((right - left) >> 1);

            // 将 middle 对应的元素给中间节点
            curNode.val = nums[middle];

            // 左区间
            if (left <= middle - 1) {
                curNode.left = new TreeNode(-1);
                nodeQueue.offer(curNode.left);
                leftQueue.offer(left);
                rightQueue.offer(middle - 1);
            }

            // 右区间
            if (right >= middle + 1 ) {
                curNode.right = new TreeNode(-1);
                nodeQueue.offer(curNode.right);
                leftQueue.offer(middle + 1);
                rightQueue.offer(right);
            }
        }

        return root;
    }
}
// @lc code=end

