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
    ListNode* reverse(ListNode* head) {
        ListNode* c = head;
        ListNode* p = nullptr;
        ListNode* n = nullptr;
        while(c != nullptr) {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        return p;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // ListNode* revL1 = reverse(l1);
        // ListNode* revL2 = reverse(l2);

        ListNode* revL1 = l1;
        ListNode* revL2 = l2;

        int carry = 0;
        ListNode* head = nullptr;
        ListNode* temp = nullptr;
        while(revL1 != nullptr || revL2 != nullptr) {
            int sum = 0;
            int a = 0, b = 0;
            if(revL1 != nullptr) {
                a = revL1->val;
                revL1 = revL1->next;
            }
            if(revL2 != nullptr) {
                b = revL2->val;
                revL2 = revL2->next;
            }
            sum = a + b + carry;
            carry = sum / 10;
            sum = sum % 10;
            ListNode* newNode = new ListNode(sum);
            if(head == nullptr) {
                head = newNode;
                temp = head;
            } else {
                temp->next = newNode;
                temp = temp->next;
            }
        }
        if(carry != 0) {
            ListNode* newNode = new ListNode(carry);
            temp->next = newNode;
            temp = temp->next;
        }
        temp->next = nullptr;
        return head;
    }
};