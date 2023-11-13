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
    ListNode* rotate (ListNode* node, int k) {
        int i = 0;
        ListNode* c = node;
        ListNode* n = node;
        ListNode* t = nullptr;
        while(n != nullptr && i < k) {
            n = n->next;
            c->next = t;
            t = c;
            c = n;
            i++;
        }

        ListNode* x = t;
        t = nullptr;
        while(c != nullptr) {
            n = n->next;
            c->next = t;
            t = c;
            c = n;
        }
        node->next = t;
        node = x;
        c = x;
        n = x;
        t = nullptr;
        while(c != nullptr) {
            n = n->next;
            c->next = t;
            t = c;
            c = n;
        }
        return t;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) return nullptr;
        int x = 0;
        ListNode* t = head;
        while(t != nullptr) {
            t = t->next;
            x++;
        }
        k = k % x;
        k = x - k;
        head = rotate(head, k);
        return head;
    }
};