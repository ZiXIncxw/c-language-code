#define _CRT_SECURE_NO_WARNINGS 1

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode* middleNode(struct ListNode* head)
{
    ListNode* pcur = head;
    int n = 0;
    while (pcur)
    {
        pcur = pcur->next;
        n++;
    }
    int steps = n / 2;
    pcur = head;
    while (steps--)
    {
        pcur = pcur->next;
    }
    return pcur;
}


#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* partition(struct ListNode* pHead, int x) {
    // 创建两个哑节点
    struct ListNode* smallHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* largeHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    smallHead->next = NULL;
    largeHead->next = NULL;

    struct ListNode* smallTail = smallHead;
    struct ListNode* largeTail = largeHead;

    struct ListNode* cur = pHead;
    while (cur != NULL) {
        struct ListNode* next = cur->next; // 保存下一个节点
        if (cur->val < x) {
            // 接到小于链表的尾部
            smallTail->next = cur;
            smallTail = cur;
        }
        else {
            // 接到大于等于链表的尾部
            largeTail->next = cur;
            largeTail = cur;
        }
        cur->next = NULL; // 断开原链接，防止形成环
        cur = next;
    }

    // 连接两个链表
    smallTail->next = largeHead->next;
    struct ListNode* newHead = smallHead->next;

    // 释放哑节点
    free(smallHead);
    free(largeHead);

    return newHead;
}

/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class Partition {
public:
    ListNode* partition(ListNode* pHead, int x) {
        // 创建两个哑节点（使用 new 分配）
        ListNode* smallHead = new ListNode(0);
        ListNode* largeHead = new ListNode(0);
        ListNode* smallTail = smallHead;
        ListNode* largeTail = largeHead;

        ListNode* curr = pHead;
        while (curr)
        {
            ListNode* next = curr->next;
            if (curr->val < x)
            {
                smallTail->next = curr;
                smallTail = curr;
            }
            else
            {
                largeTail->next = curr;
                largeTail = curr;
            }
            curr->next = NULL;
            curr = next;
        }
        smallTail->next = largeHead->next;
        ListNode* newhead = smallHead->next;

        delete smallHead;
        delete largeHead;

        return newhead;
    }
};


/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
    // 反转链表函数（返回新头）
    ListNode* reverseList(ListNode* head)
    {
        ListNode* prev = NULL;
        ListNode* cur = head;
        while (cur)
        {
            ListNode* next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }

    bool chkPalindrome(ListNode* A)
    {
        if (A == NULL || A->next == NULL)
            return true; // 空或只有一个节点是回文

        // 1. 找到中间节点（快慢指针）
        ListNode* slow = A;
        ListNode* fast = A;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        // 此时 slow 指向中间节点（如果偶数，指向第二个中间节点）

        // 2. 反转后半部分（从 slow 开始）
        ListNode* right = reverseList(slow); // 反转后的头
        ListNode* left = A;

        // 3. 比较
        bool isPalindrome = true;//假设
        while (right)
        {
            if (left->val != right->val)
            {
                isPalindrome = false;
                break;
            }
            left = left->next;
            right = right->next;
        }

        return isPalindrome;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode ListNode;
struct ListNode* getIntersectionNode(struct ListNode* headA, struct ListNode* headB)
{
    ListNode* currA = headA;
    ListNode* currB = headB;
    int lenA = 0;
    int lenB = 0;
    while (currA)
    {
        currA = currA->next;
        lenA++;
    }
    while (currB)
    {
        currB = currB->next;
        lenB++;
    }
    int gap = abs(lenA - lenB);
    ListNode* longlist = headA;
    ListNode* shortlist = headB;
    if (lenA < lenB)
    {
        longlist = headB;
        shortlist = headA;
    }
    while (gap--)
    {
        longlist = longlist->next;
    }
    while (shortlist != longlist)
    {
        longlist = longlist->next;
        shortlist = shortlist->next;
    }
    return longlist;
}