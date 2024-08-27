/*
 * @lc app=leetcode.cn id=239 lang=java
 *
 * [239] 滑动窗口最大值
 */

// @lc code=start
// 用双端队列实现单调队列（有点难理解）
class Solution {
    /**
     * 计算滑动窗口中的最大值
     * 使用双端队列来维护窗口内的候选最大值索引，队列头部始终是当前窗口的最大值索引。
     * 通过队列保证索引的顺序与数值大小降序，即队首最大。
     *
     * @param nums 输入的整数数组
     * @param k 滑动窗口的大小
     * @return 返回一个数组，包含每个滑动窗口中的最大值
     */
    public int[] maxSlidingWindow(int[] nums, int k) {
        // 使用双端队列来存储当前窗口内的元素索引
        ArrayDeque<Integer> deque = new ArrayDeque<Integer>();
        // 获取数组的长度
        int len = nums.length;
        // 初始化结果数组，用于存放每个滑动窗口的最大值
        int[] res = new int[len - k + 1];
        // 初始化结果数组的索引
        int index = 0;
        
        // 遍历数组中的每个元素
        for (int i = 0; i < len; i++) {
            // 移动滑动窗口前，移除窗口前的元素索引
            while (!deque.isEmpty() && deque.peek() < i - k + 1) {
                deque.poll();
            }
            
            // 保持队列的降序性，队尾元素小于当前元素i，则移除队尾元素索引
            while (!deque.isEmpty() && nums[deque.peekLast()] < nums[i]) {
                deque.pollLast();
            }

            // 将当前元素索引加入队列尾部
            deque.offer(i);

            // 当滑动窗口形成后，记录当前窗口的最大值
            if (i >= k - 1) {
                // 将当前窗口的最大值存入结果数组
                res[index] = nums[deque.peek()];
                // 结果数组索引后移
                index++;
            }
        }
        // 返回结果数组
        return res;
    }
}
// @lc code=end

