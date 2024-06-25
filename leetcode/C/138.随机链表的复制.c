/*
 * @lc app=leetcode.cn id=138 lang=c
 *
 * [138] 随机链表的复制
 */

// @lc code=start
/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */

struct Node* copyRandomList(struct Node* head) {
    //1、拷贝节点插入原节点后面
	struct Node* cur =head;
    while(cur)
    {
        struct Node* copy=(struct Node*)malloc(sizeof(struct Node));
        copy->val = cur->val;

        //插入copy节点
        copy->next = cur->next;
        cur->next = copy;

        cur = copy->next;
    }

    //2、根据原节点，处理copy节点的random
    cur=head;
    while(cur)
    {
        struct Node* copy = cur->next;
        if(cur->random == NULL)
        {
            copy->random = NULL;
        }
        else
        {
            copy->random = cur->random->next;
        }
        cur=copy->next;

    }

    //3、把拷贝节点解下来，链接成新的链表。同时恢复原链表
    struct Node*copy_head=NULL, *copy_tail=NULL;
    cur=head;
    while(cur)
    {
        struct Node*copy=cur->next;
        struct Node*next=copy->next;

        if(copy_tail == NULL)
        {
            copy_head=copy_tail=copy;
        }
        else
        {
            copy_tail->next = copy;
            copy_tail=copy;
        }

        cur->next=next;
        cur=next;

    }

    return copy_head;
}
// @lc code=end

