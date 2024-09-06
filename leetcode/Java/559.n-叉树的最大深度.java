/*
 * @lc app=leetcode.cn id=559 lang=java
 *
 * [559] N 叉树的最大深度
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

/**
 * 递归法（后序遍历）
 * 本类用于解决多叉树的最大深度问题
 */
class Solution {
    /**
     * 计算给定多叉树的最大深度
     * 
     * @param root 树的根节点，如果为null表示树为空
     * @return 返回树的最大深度
     */
    public int maxDepth(Node root) {
        // 如果根节点为空，树的深度为0
        if (root == null) {
            return 0;
        }

        // 初始化深度，用于记录遍历过程中的最大深度
        int depth = 0;
        // 如果根节点的子节点列表不为空
        if (root.children != null) {
            // 遍历每个子节点，递归计算子树的最大深度
            for (Node child : root.children) {
                // 更新最大深度
                depth = Math.max(depth, maxDepth(child));
            }
        }

        // 返回最大深度加1，加上根节点自身的深度
        return depth + 1;
    }
}

/**
 * 迭代法（层序遍历）
 * 本类用于解决多叉树的最大深度问题
 */
class Solution {
    /**
     * 使用广度优先搜索算法计算多叉树的最大深度
     * 
     * @param root 根节点，是多叉树的起始节点
     * @return 返回多叉树的最大深度
     */
    public int maxDepth(Node root) {
        // 如果根节点为空，树的深度为0
        if (root == null) {
            return 0;
        }

        // 初始化深度为0，用于记录树的深度
        int depth = 0;
        // 使用队列来进行广度优先搜索
        Queue<Node> queue = new LinkedList<>();
        // 将根节点加入队列
        queue.offer(root);

        // 当队列不为空时，继续遍历
        while (!queue.isEmpty()) {
            // 深度加一，表示当前遍历到的层次加一
            depth++;
            // 获取当前队列中的节点数量，这些节点在同一层
            int size = queue.size();

            // 遍历当前队列中的所有节点
            for (int i = 0; i < size; i++) {
                // 出队列一个节点
                Node node = queue.poll();
                // 遍历该节点的所有子节点
                for (int j = 0; j < node.children.size(); j++) {
                    // 如果子节点不为空，将子节点加入队列
                    if (node.children.get(j) != null) {
                        queue.offer(node.children.get(j));
                    }
                }
            }
        }
        // 返回树的最大深度
        return depth;
    }
}
// @lc code=end

