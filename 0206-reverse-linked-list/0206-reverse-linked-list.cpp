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
    ListNode* reverseList(ListNode* head) {
        ListNode* n = nullptr;
        ListNode* c = head;
        ListNode* p = nullptr;
        while(c != nullptr) {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        return p;
    }
};