/*
 * @lc app=leetcode.cn id=232 lang=c
 *
 * [232] 用栈实现队列
 */

// @lc code=start

typedef int STDataType;
typedef struct Stack
{
    STDataType *a;
    int top;
    int capacity;
} ST;

// 初始化
void StackInit(ST *ps);

// 销毁栈
void StackDestroy(ST *ps);

// 入栈
void StackPush(ST *ps, STDataType x);

// 出栈
void StackPop(ST *ps);

// 栈顶
STDataType StackTop(ST *ps);

// 栈的容量
int StackSize(ST *ps);

// 判断栈是否为空
bool StackEmpty(ST *ps);

// 初始化
void StackInit(ST *ps)
{
    assert(ps);
    ps->a = NULL;
    ps->top = 0; // top 给的是 0，意味着 top 指向栈顶数据的下一个；给的是 -1，则指向栈顶数据
    ps->capacity = 0;
}

// 销毁栈
void StackDestroy(ST *ps)
{
    assert(ps);
    free(ps->a);
    ps->a = NULL;
    ps->capacity = ps->top = 0;
}

// 入栈
void StackPush(ST *ps, STDataType x)
{
    assert(ps);
    if (ps->top == ps->capacity)
    {
        int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
        STDataType *tmp = realloc(ps->a, sizeof(STDataType) * newCapacity);
        if (tmp == NULL)
        {
            printf("malloc fail\n");
            exit(-1);
        }
        ps->a = tmp;
        ps->capacity = newCapacity;
    }
    ps->a[ps->top] = x;
    ps->top++;
}

// 出栈
void StackPop(ST *ps)
{
    assert(ps);
    assert(ps->top > 0);

    ps->top--;
}

// 栈顶
STDataType StackTop(ST *ps)
{
    assert(ps);
    assert(ps->top > 0); // assert(!StackEmpty(ps));

    return ps->a[ps->top - 1];
}

// 栈的容量
int StackSize(ST *ps)
{
    assert(ps);

    return ps->top;
}

// 判断栈是否为空
bool StackEmpty(ST *ps)
{
    assert(ps);

    return ps->top == 0;
}

typedef struct
{
    ST pushST;
    ST popST;
} MyQueue;

MyQueue *myQueueCreate()
{
    MyQueue *q = (MyQueue *)malloc(sizeof(MyQueue));
    StackInit(&q->pushST);
    StackInit(&q->popST);

    return q;
}

void myQueuePush(MyQueue *obj, int x)
{
    assert(obj);

    StackPush(&obj->pushST, x);
}

int myQueuePop(MyQueue *obj)
{
    assert(obj);

    // 如果 popST 中没有数据，将 pushST 的数据导过去
    // popST 中的数据就符合先进先出的顺序
    if (StackEmpty(&obj->popST))
    {
        while (!StackEmpty(&obj->pushST))
        {
            StackPush(&obj->popST, StackTop(&obj->pushST));
            StackPop(&obj->pushST);
        }
    }

    int front = StackTop(&obj->popST);
    StackPop(&obj->popST);

    return front;
}

int myQueuePeek(MyQueue *obj)
{
    assert(obj);

    // 如果 popST 中没有数据，将 pushST 的数据导过去
    // popST 中的数据就符合先进先出的顺序
    if (StackEmpty(&obj->popST))
    {
        while (!StackEmpty(&obj->pushST))
        {
            StackPush(&obj->popST, StackTop(&obj->pushST));
            StackPop(&obj->pushST);
        }
    }

    return StackTop(&obj->popST);
}

bool myQueueEmpty(MyQueue *obj)
{
    assert(obj);

    return StackEmpty(&obj->pushST) && StackEmpty(&obj->popST);
}

void myQueueFree(MyQueue *obj)
{
    assert(obj);

    StackDestroy(&obj->pushST);
    StackDestroy(&obj->popST);
    free(obj);
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);

 * int param_2 = myQueuePop(obj);

 * int param_3 = myQueuePeek(obj);

 * bool param_4 = myQueueEmpty(obj);

 * myQueueFree(obj);
*/
// @lc code=end
