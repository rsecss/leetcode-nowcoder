/*
 * @lc app=leetcode.cn id=110 lang=c
 *
 * [110] 平衡二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int maxDepth(struct TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }

    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);

    return leftDepth > rightDepth ? leftDepth + 1 : rightDepth + 1;
}
bool isBalanced(struct TreeNode *root)
{
    if (root == NULL)
    {
        return true;
    }

    int leftDepth = maxDepth(root->left);
    int rightDepth = maxDepth(root->right);

    return abs(leftDepth - rightDepth) < 2 && isBalanced(root->left) && isBalanced(root->right);
}
// @lc code=end
