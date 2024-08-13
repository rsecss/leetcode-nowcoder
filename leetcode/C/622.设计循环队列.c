/*
 * @lc app=leetcode.cn id=622 lang=c
 *
 * [622] 设计循环队列
 */

// @lc code=start

typedef struct
{
    int *a;
    int front;
    int tail;
    int capacity;
} MyCircularQueue;

bool myCircularQueueIsEmpty(MyCircularQueue *obj);
bool myCircularQueueIsFull(MyCircularQueue *obj);
MyCircularQueue *myCircularQueueCreate(int k)
{
    MyCircularQueue *cq = (MyCircularQueue *)malloc(sizeof(MyCircularQueue));
    cq->a = (int *)malloc(sizeof(int) * (k + 1));
    cq->front = cq->tail = 0;
    cq->capacity = k + 1;

    return cq;
}

bool myCircularQueueEnQueue(MyCircularQueue *obj, int value)
{
    if (myCircularQueueIsFull(obj))
    {
        return false;
    }

    obj->a[obj->tail] = value;
    obj->tail = (obj->tail + 1) % obj->capacity;

    return true;
}

bool myCircularQueueDeQueue(MyCircularQueue *obj)
{
    if (myCircularQueueIsEmpty(obj))
    {
        return false;
    }

    obj->front = (obj->front + 1) % obj->capacity;

    return true;
}

int myCircularQueueFront(MyCircularQueue *obj)
{
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }

    return obj->a[obj->front % obj->capacity];
}

int myCircularQueueRear(MyCircularQueue *obj)
{
    if (myCircularQueueIsEmpty(obj))
    {
        return -1;
    }

    // 修正逻辑，直接返回队尾元素，无需特殊处理 obj->tail == 0 的情况
    // 因为即使 tail 回到 0，队列满时要查询的也是当前最后一个实际存储的元素
    return obj->a[(obj->tail - 1 + obj->capacity) % obj->capacity];
}

bool myCircularQueueIsEmpty(MyCircularQueue *obj)
{
    return obj->front == obj->tail;
}

bool myCircularQueueIsFull(MyCircularQueue *obj)
{
    return (obj->tail + 1) % obj->capacity == obj->front;
}

void myCircularQueueFree(MyCircularQueue *obj)
{
    free(obj->a);
    obj->a = NULL;
    free(obj);
    obj = NULL;
}

/**
 * Your MyCircularQueue struct will be instantiated and called as such:
 * MyCircularQueue* obj = myCircularQueueCreate(k);
 * bool param_1 = myCircularQueueEnQueue(obj, value);

 * bool param_2 = myCircularQueueDeQueue(obj);

 * int param_3 = myCircularQueueFront(obj);

 * int param_4 = myCircularQueueRear(obj);

 * bool param_5 = myCircularQueueIsEmpty(obj);

 * bool param_6 = myCircularQueueIsFull(obj);

 * myCircularQueueFree(obj);
*/
// @lc code=end
