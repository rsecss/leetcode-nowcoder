/*
 * @lc app=leetcode.cn id=225 lang=java
 *
 * [225] 用队列实现栈
 */

// @lc code=start
//法一：使用两个 Queue 实现
class MyStack {
    Queue<Integer> queue1; // 和栈中保持一样元素的队列
    Queue<Integer> queue2; // 辅助队列

    public MyStack() {
        queue1 = new ArrayDeque<>();
        queue2 = new ArrayDeque<>();
    }
    // 在加入元素时先将 queue1 中的元素依次出栈压入 queue2，然后将新加入的元素压入 queue1，再将 queue2 中的元素依次出栈压入 queue1
    public void push(int x) {
        while (queue1.size() > 0) {
            queue2.add(queue1.poll()); // 从 queue1 队头部移除一个元素，并将该元素添加到 queue2 队尾
        }
        queue1.add(x);
        while (queue2.size() > 0) {
            queue1.add(queue2.poll());
        }
    }
    
    public int pop() {
        return queue1.poll();
    }
    
    public int top() {
        return queue1.peek();
    }
    
    public boolean empty() {
        return queue1.isEmpty();
    }
}

// 法二：优化后使用一个 Dequeue 实现
class MyStack {
    Deque<Integer> queue;
    
    public MyStack(){
        queue = new ArrayDeque<>();
    }

    public void push(int x) {
        queue.addLast(x); // 将元素 x 添加到队列 queue 的末尾
    }

    public int pop() {
        int size = queue.size();

        while (size > 1) {
            queue.addLast(queue.peekFirst()); // 获取队列首元素并添加到末尾
            queue.pollFirst(); // 从队列的前端移除并返回队列中的第一个元素
            size--;
        }

        int res = queue.pollFirst(); // 移除栈顶元素
        return res;
    }

    public int top() {
        return queue.peekLast();
    }

    public boolean empty() {
        return queue.isEmpty();
    }
}

// 法三：优化后使用一个 Queue 实现（进入队列后就改造成栈，然后操作）
class MyStack {
    Queue<Integer> queue;

    public MyStack() {
        queue = new LinkedList<>();
    }

    public void push(int x) {
        queue.offer(x);
        int size = queue.size();

        //移动除了 X 的其它数
        while (size > 1) {
            queue.offer(queue.poll());
            size--;
        }
    }
    
    public int pop() {
        return queue.poll();
    }

    public int top() {
        return queue.peek();
    }

    public boolean empty() {
        return queue.isEmpty();
    }
}

// 法四：优化后使用一个 Queue 实现（进入队列对其直接操作）
class MyStack {
    Queue<Integer> queue;

    public MyStack() {
        queue = new LinkedList<>();
    }

    public void push(int x) {
        queue.add(x);
    }

    public int pop() {
        rePostion();
        return queue.poll();
    }

    public int top() {
        rePostion();
        int result = queue.poll();
        queue.add(result);
        return result;
    }

    public boolean empty() {
        return queue.isEmpty();
    }

    public void rePostion() {
        int size = queue.size();
        while (size > 1) {
            queue.add(queue.poll());
            size--;
        }
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */
// @lc code=end

