/*
 * @lc app=leetcode.cn id=102 lang=java
 *
 * [102] 二叉树的层序遍历
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
    public List<List<Integer>> resList = new ArrayList<List<Integer>>();
    public List<List<Integer>> levelOrder(TreeNode root) {
        //checkFun1(root, 0);
        checkFun2(root);

        return resList;
    }

    // BFS--递归方式（有点难懂）
public void checkFun1(TreeNode node, Integer deep) {
    // 如果节点为空，直接返回
    if (node == null) {
        return;
    }
    // 深度增加1
    deep++;

    // 如果当前深度超过resList的大小，说明到了新的一层
    // 需要新建一个列表来存储当前层的节点值
    if (resList.size() < deep) {
        List<Integer> index = new ArrayList<Integer>();
        resList.add(index);
    }

    // 将当前节点的值添加到对应深度的列表中
    resList.get(deep - 1).add(node.val);

    // 递归遍历左子树和右子树
    checkFun1(node.left, deep);
    checkFun1(node.right, deep);
}

    // BFS--迭代方式--借助队列（先进先出）
    public void checkFun2(TreeNode node) {
        if (node == null) {
            return;
        }
        Queue<TreeNode> queue = new LinkedList<TreeNode>();
        queue.offer(node);

        while(!queue.isEmpty()) {
            List<Integer> itemList = new ArrayList<Integer>();
            int len = queue.size();

            while (len > 0) {
                TreeNode tempNode = queue.poll();
                itemList.add(tempNode.val);

                if (tempNode.left != null) {
                    queue.offer(tempNode.left);
                }
                if (tempNode.right != null) {
                    queue.offer(tempNode.right);
                }
                len--;
            }
            resList.add(itemList);
        }
    }
}
// @lc code=end

