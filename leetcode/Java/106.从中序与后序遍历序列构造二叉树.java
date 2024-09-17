/*
 * @lc app=leetcode.cn id=106 lang=java
 *
 * [106] 从中序与后序遍历序列构造二叉树
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

// 法一
class Solution {
    // 使用哈希表存储中序遍历序列的元素与其索引的映射关系
    Map<Integer, Integer> map;

    /**
     * 根据中序遍历和后序遍历的序列重建二叉树。
     *
     * @param inorder 中序遍历序列
     * @param postorder 后序遍历序列
     * @return 重建的二叉树的根节点
     */
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        map = new HashMap<>();
        // 用 map 保存中序序列的数值对应位置
        for (int i = 0; i < inorder.length; i++) {
            map.put(inorder[i], i);
        }
        
        // 调用递归函数构建二叉树，初始时整个数组作为序列输入
        return findNode(inorder, 0, inorder.length, postorder, 0, postorder.length);
    }

    /**
     * 递归函数用于构建二叉树的节点。
     *
     * @param inorder 中序遍历序列
     * @param inBegin 中序序列的起始索引
     * @param inEnd 中序序列的结束索引
     * @param postorder 后序遍历序列
     * @param postBegin 后序序列的起始索引
     * @param postEnd 后序序列的结束索引
     * @return 当前子树的根节点
     */
    public TreeNode findNode(int[] inorder, int inBegin, int inEnd, int[] postorder, int postBegin, int postEnd) {
        // 当起始索引小于结束索引时，递归结束，返回空
        if (inBegin >= inEnd || postBegin >= postEnd) {
            return null;
        } 

        // 后序遍历的最后一个元素为当前子树的根节点值
        int rootValue = postorder[postEnd - 1];
        // 通过哈希表获取根节点值在中序遍历中的索引
        int rootIndex = map.get(rootValue);
        // 创建当前子树的根节点
        TreeNode root = new TreeNode(rootValue);
        // 左子树的长度等于根节点索引减去中序遍历起始索引
        int lengthLeft = rootIndex - inBegin;
        
        // 递归构建左子树
        root.left = findNode(inorder, inBegin, rootIndex, postorder, postBegin, postBegin + lengthLeft);
        // 递归构建右子树
        root.right = findNode(inorder, rootIndex + 1, inEnd, postorder, postBegin + lengthLeft, postEnd - 1);

        return root;
    }
}

// 法二

class Solution {
    /**
     * 主要方法，用于调用辅助方法构建二叉树
     *
     * @param inorder   中序遍历结果
     * @param postorder 后序遍历结果
     * @return 重建的二叉树的根节点
     */
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        // 当输入的数组为空时，返回null
        if (inorder.length == 0 && postorder.length == 0) {
            return null;
        }

        // 调用辅助方法构建二叉树
        return buildHelper(inorder, 0, inorder.length, postorder, 0, postorder.length);
    }

    /**
     * 辅助方法，用于递归构建二叉树
     *
     * @param inorder   中序遍历结果
     * @param inBegin   中序遍历起始位置
     * @param inEnd     中序遍历结束位置
     * @param postorder 后序遍历结果
     * @param postBegin 后序遍历起始位置
     * @param postEnd   后序遍历结束位置
     * @return 当前子树的根节点
     */
    private TreeNode buildHelper(int[] inorder, int inBegin, int inEnd, int[] postorder, int postBegin, int postEnd) {
        // 当起始位置等于结束位置时，表示当前子树为空
        if (postBegin == postEnd) {
            return null;
        }

        // 后序遍历的最后一个元素是当前子树的根节点
        int rootValue = postorder[postEnd - 1];
        TreeNode root = new TreeNode(rootValue);

        // 在中序遍历中找到根节点的位置
        int middleIndex;
        for (middleIndex = inBegin; middleIndex < inEnd; middleIndex++) {
            if (inorder[middleIndex] == rootValue) {
                break;
            }
        }

        // 划分左子树和右子树在中序遍历中的范围
        int leftInorderBegin = inBegin;
        int leftInorderEnd = middleIndex;
        int rightInorderBegin = middleIndex + 1;
        int rightInorderEnd = inEnd;

        // 计算左子树在后序遍历中的范围
        int leftPostBegin = postBegin;
        int leftPostEnd = postBegin + (middleIndex - inBegin);

        // 计算右子树在后序遍历中的范围
        int rightPostBegin = leftPostEnd;
        int rightPostEnd = postEnd - 1;

        // 递归构建左子树和右子树
        root.left = buildHelper(inorder, leftInorderBegin, leftInorderEnd, postorder, leftPostBegin, leftPostEnd);
        root.right = buildHelper(inorder, rightInorderBegin, rightInorderEnd, postorder, rightPostBegin, rightPostEnd);

        return root;
    }
}
// @lc code=end
