/*
 * @lc app=leetcode.cn id=20 lang=c
 *
 * [20] 有效的括号
 */

// @lc code=start

typedef char STDataType;
typedef struct Stack
{
    STDataType *a;
    int top;
    int capacity;
} ST;

/*
// 初始化
void StackInit(ST* ps);

// 销毁栈
void StackDestroy(ST* ps);

// 入栈
void StackPush(ST* ps, STDataType x);

// 出栈
void StackPop(ST* ps);

// 栈顶
STDataType StackTop(ST* ps);

// 栈的容量
int StackSize(ST* ps);

// 判断栈是否为空
bool StackEmpty(ST* ps);
*/
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

bool isValid(char *s)
{
    ST st;
    StackInit(&st);
    while (*s)
    {
        if (*s == '(' || *s == '{' || *s == '[')
        {
            StackPush(&st, *s);
            s++;
        }
        else
        {
            // 遇到有括号了，但是栈里面没有数据，说明前面没有左括号，不匹配，返回 false
            if (StackEmpty(&st))
            {
                StackDestroy(&st);
                return false;
            }
            STDataType top = StackTop(&st);
            StackPop(&st);
            if ((*s == '}' && top != '{') || (*s == ')' && top != '(') || (*s == ']' && top != '['))
            {
                StackDestroy(&st);
                return false;
            }
            else
            {
                s++;
            }
        }
    }
    // 如果栈不是空，说明栈中还有左括号未出，没有匹配，返回 false
    bool ret = StackEmpty(&st);
    StackDestroy(&st);

    return ret;
}
// @lc code=end
