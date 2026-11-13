#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//struct ListNode* removeElements(struct ListNode* head, int val) {
//    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
//    dummy->next = head;
//    struct ListNode* prev = dummy;
//    struct ListNode* curr = head;
//    while (curr != NULL) {
//        if (curr->val == val) {
//            prev->next = curr->next;
//            free(curr);          // 释放被删除节点的内存（可选）
//            curr = prev->next;
//        }
//        else {
//            prev = curr;
//            curr = curr->next;
//        }
//    }
//    struct ListNode* newHead = dummy->next;
//    free(dummy);
//    return newHead;
//}








