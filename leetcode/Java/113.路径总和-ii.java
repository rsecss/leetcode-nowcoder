/*
 * @lc app=leetcode.cn id=113 lang=java
 *
 * [113] 路径总和 II
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
    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        List<List<Integer>> res = new ArrayList<>();
        if (root == null) {
            return res;
        }

        List<Integer> path = new LinkedList<>();
        preorder(root, targetSum, res, path);
        return res;
    }

    public void preorder(TreeNode root, int targetSum, List<List<Integer>> res, List<Integer> path) {
        path.add(root.val);

        // 遇到叶子节点
        if (root.left == null && root.right == null) {
            if (targetSum - root.val == 0) {
                res.add(new ArrayList<>(path));
            } else {
                return;
            }
        }

        if (root.left != null) {
            preorder(root.left, targetSum - root.val, res, path);
            path.remove(path.size() - 1); // 删除列表 path 中的最后一个元素
        }
        if (root.right != null) {
            preorder(root.right, targetSum - root.val, res, path);
            path.remove(path.size() - 1);
        }
    }
}


// 迭代 （不好理解）
class Solution {
    /**
     * 根据给定的根节点和目标和，寻找二叉树中所有节点和等于目标和的路径
     * 
     * @param root 二叉树的根节点
     * @param targetSum 目标和
     * @return 包含所有满足条件的路径的列表
     */
    public List<List<Integer>> pathSum(TreeNode root, int targetSum) {
        // 存储最终结果的列表
        List<List<Integer>> result = new ArrayList<>();
        // 用于存储遍历过程中的节点
        Stack<TreeNode> nodeStack = new Stack<>();
        // 用于存储遍历过程中的节点值之和
        Stack<Integer> sumStack = new Stack<>();
        // 用于存储遍历过程中的路径
        Stack<ArrayList<Integer>> pathStack = new Stack<>();

        // 检查根节点是否为空
        if (root == null) {
            return result;
        }
        
        // 将根节点压入栈中
        nodeStack.add(root);
        // 将根节点的值压入和栈中
        sumStack.add(root.val);
        // 将一个空路径压入路径栈中
        pathStack.add(new ArrayList<>());

        // 当节点栈不为空时，继续遍历
        while (!nodeStack.isEmpty()) {
            // 获取当前节点栈的顶部节点
            TreeNode node = nodeStack.peek();
            // 弹出当前的路径和
            int sum = sumStack.pop();
            // 弹出当前的路径
            ArrayList<Integer> path = pathStack.pop();

            // 如果当前节点不为空
            if (node != null) {
                // 从节点栈中弹出当前节点
                nodeStack.pop();
                // 将当前节点再次压入栈中，以便后续处理
                nodeStack.add(node);
                // 将当前节点的值添加到路径中
                path.add(node.val);
                // 将当前路径压入路径栈中
                pathStack.add(new ArrayList<>(path));

                // 如果当前节点有左子节点
                if (node.left != null) {
                    // 将左子节点压入节点栈中
                    nodeStack.add(node.left);
                    // 将当前和加上左子节点的值压入和栈中
                    sumStack.add(sum + node.left.val);
                    // 将当前路径压入路径栈中
                    pathStack.add(new ArrayList<>(path));
                }
                // 如果当前节点有右子节点
                if (node.right != null) {
                    // 将右子节点压入节点栈中
                    nodeStack.add(node.right);
                    // 将当前和加上右子节点的值压入和栈中
                    sumStack.add(sum + node.right.val);
                    // 将当前路径压入路径栈中
                    pathStack.add(new ArrayList<>(path));
                }
            } else {
                // 弹出标志空节点的null元素
                nodeStack.pop();
                // 弹出上一个节点
                TreeNode temp = nodeStack.pop();
                // 如果当前节点是叶子节点，且路径和等于目标和
                if (temp.left == null && temp.right == null && sum == targetSum) {
                    // 将当前路径添加到结果列表中
                    result.add(new ArrayList<>(path));
                }
            }
        }
        // 返回所有满足条件的路径
        return result;
    }
}
// @lc code=end

