/*
 * @lc app=leetcode.cn id=707 lang=java
 *
 * [707] 设计链表
 */

// @lc code=start

// 单链表
class ListNode{
    int val;
    ListNode next;
    ListNode(){}
    ListNode(int val) {
        this.val = val;
    }
}

class MyLinkedList {
    int size; // 存储元素的个数
    ListNode head;

    // 初始化节点
    public MyLinkedList() {
        size = 0;
        head = new ListNode(0); // 创建一个虚拟头节点 head
    }
    // 获取第 index 个节点的数值，注意 index 是从 0 开始的，第 0 个节点就是头结点
    public int get(int index) {
        // 判断是否合法
        if (index < 0 || index >= size) {
            return -1;
        }

        ListNode cur = head;
        // 包含虚拟头节点
        for (int i = 0; i <= index; i++) {
            cur = cur.next;
        }
        return cur.val;
    }
    
    // 在链表的表头添加一个新的表头，等价于在第 0 个元素前添加
    public void addAtHead(int val) {
        ListNode newNode = new ListNode(val);
        newNode.next = head.next;
        head.next = newNode;
        size++;
    }
    
    // 在链表的表尾添加一个新的节点，等价于在「末尾+1」个元素前添加
    public void addAtTail(int val) {
        ListNode newNode =new ListNode(val);
        ListNode cur = head;
        while (cur.next != null) {
            cur = cur.next;
        }

        cur.next = newNode;
        size++;
    }

    // 在第 index 个节点之前插入一个新节点，例如 index 为 0，那么新插入的节点为链表的新头节点。
    // 如果 index 等于链表的长度，则说明是新插入的节点为链表的尾结点
    // 如果 index 大于链表的长度，则返回空    
    public void addAtIndex(int index, int val) {
        if (index < 0) {
            index = 0;
        }
        if (index > size) {
            return;
        }

        // 找到要插入节点的前驱
        ListNode prev = head;
        for (int i = 0; i < index; i++) {
            prev = prev.next;
        }
        ListNode newNode = new ListNode(val);
        newNode.next = prev.next;
        prev.next = newNode;
        size++;
    }
    
    // 删除第 index 节点
    public void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }
        
        // 因为有虚拟头节点，所以不用对 Index=0 的情况进行特殊处理
        ListNode prev = head;
        for (int i = 0; i < index; i++) {
            prev = prev.next;
        }
        prev.next = prev.next.next;
        size--;

    }
}

// 双向链表（要随时注意一个类中包含前后「指针」）
class ListNode{
    int val;
    ListNode next,prev;
    ListNode() {}
    ListNode(int val) {
        this.val = val;
    }
}

class MyLinkedList {
    int size; // 存储元素的个数
    ListNode head,tail;

    // 初始化
    public MyLinkedList() {
        size = 0;
        head = new ListNode(0);
        tail = new ListNode(0);

        // 关键
        head.next = tail;
        tail.prev = head;

    }
    
    public int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }

        ListNode cur = head;

        // 判断从哪一边遍历时间更短
        if (index >= size>>1) {
            // 从 tail 开始
            cur = tail;
            for (int i = 0; i < size - index; i++) {
                cur = cur.prev;
            }
        } else {
            // 从 head 开始
            cur = head;
            for (int j = 0; j <= index; j++) {
                cur = cur.next;
            }
        }
        return cur.val;
    }
    
    public void addAtHead(int val) {
        addAtIndex(0,val);
    }
    
    public void addAtTail(int val) {
        addAtIndex(size,val);
    }
    
    public void addAtIndex(int index, int val) {
        // 判断索引是否有效
        if (index < 0 || index > size) {
            return;
        }

        ListNode pre = head;
        for (int i = 0; i < index; i++) {
            pre = pre.next;
        }

        // 新建一个节点
        ListNode newNode = new ListNode(val);
        newNode.next = pre.next;
        pre.next.prev = newNode;
        newNode.prev = pre;
        pre.next = newNode;

        size++;
    }
    
    public void deleteAtIndex(int index) {
        // 判断索引是否有效
        if (index < 0 || index >= size) {
            return;
        }

        // 找到要删除节点的前一个位置
        ListNode pre = head;
        for (int i = 0; i < index; i++) {
            pre = pre.next;
        }

        // 删除 index 处的节点
        ListNode toDelete = pre.next;
        pre.next = toDelete.next;
        toDelete.next.prev = pre;

        size--;
    }
}

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList obj = new MyLinkedList();
 * int param_1 = obj.get(index);
 * obj.addAtHead(val);
 * obj.addAtTail(val);
 * obj.addAtIndex(index,val);
 * obj.deleteAtIndex(index);
 */
// @lc code=end

