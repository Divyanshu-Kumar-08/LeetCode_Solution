/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* t = head;
        int size = 0;
        while(t != nullptr) {
            t = t->next;
            size++;
        }
        int it = size - n;
        if(it == 0)
            return head->next;
        t = head;
        while(it > 1) {
            t = t->next;
            it--;
        }
        if(t->next == nullptr)
            return nullptr;
        t->next = t->next->next;
        return head;
    }
};