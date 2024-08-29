-/*
 * @lc app=leetcode.cn id=347 lang=java
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
// Java Map 解法
class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        int[] result = new int[k];
        // key：数字；value：频次
        Map<Integer,Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int curNumber = nums[i];
            map.put(curNumber,map.getOrDefault(curNumber,0) + 1);
        }

        // 根据 value 进行排序
        ArrayList<Map.Entry<Integer,Integer>> list = new ArrayList(map.entrySet());
        // 通过 Lambda 表达式 (a,b) -> b.getValue() - a.getValue() 进行排序
        Collections.sort(list,(a,b) -> {
            return b.getValue() - a.getValue();
        });

        for (int i = 0; i < k; i++) {
            result[i] = list.get(i).getKey();
        }

        return result;
    }
}

// 优先级队列
class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        // 优先级队列，为了避免复杂 api 操作，pq 存储数组
        // lambda 表达式设置优先级队列从大到小存储 o1 - o2 为从小到大，o2 - o1 反之
        PriorityQueue<int[]> pq = new PriorityQueue<>((o1, o2) -> o1[1] - o2[1]);
        int[] res = new int[k]; // 答案数组为 k 个元素
        Map<Integer, Integer> map = new HashMap<>(); // 记录元素出现次数
        for (int num : nums) map.put(num, map.getOrDefault(num, 0) + 1);
        for (var x : map.entrySet()) { // entrySet 获取 k-v Set 集合
            // 将 kv 转化成数组
            int[] tmp = new int[2];
            tmp[0] = x.getKey();
            tmp[1] = x.getValue();
            pq.offer(tmp);
            // 下面的代码是根据小根堆实现的，我只保留优先队列的最后的 k 个，只要超出了 k 我就将最小的弹出，剩余的 k 个就是答案
            if(pq.size() > k) {
                pq.poll();
            }
        }
        for (int i = 0; i < k; i++) {
            res[i] = pq.poll()[0]; // 获取优先队列里的元素
        }
        return res;
    }
}

// @lc code=end

