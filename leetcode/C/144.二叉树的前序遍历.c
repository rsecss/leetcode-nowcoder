/*
 * @lc app=leetcode.cn id=144 lang=c
 *
 * [144] 二叉树的前序遍历
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
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int TreeSize(struct TreeNode *root)
{
    return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}

void prevOrder(struct TreeNode *root, int *a, int *pi)
{
    if (root == NULL)
    {
        return;
    }
    a[(*pi)++] = root->val;
    //(*pi)++;

    prevOrder(root->left, a, pi);
    prevOrder(root->right, a, pi);
}
int *preorderTraversal(struct TreeNode *root, int *returnSize)
{
    int size = TreeSize(root);
    int *a = (int *)malloc(size * sizeof(int));
    int i = 0;
    prevOrder(root, a, &i);

    *returnSize = size;

    return a;
}
// @lc code=end
