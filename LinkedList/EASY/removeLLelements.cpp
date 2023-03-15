/*
Given the head of a linked list and an integer val, remove all the nodes of the linked list that has Node.val == val, and return the new head.

Example 1:
Input: head = [1,2,6,3,4,5,6], val = 6
Output: [1,2,3,4,5]

Example 2:
Input: head = [], val = 1
Output: []

Example 3:
Input: head = [7,7,7,7], val = 7
Output: []
*/
#include<bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL)
        {
            return head;
        }

        while (head != NULL && head->val==val)
        {
            head = head->next;
        }

        ListNode* curr = head;
        ListNode* prev = NULL;

        while (curr != NULL)
        {
            if (curr -> val == val)
            {
                prev->next = curr->next;
                curr = curr->next;
            }
            else 
            {
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};