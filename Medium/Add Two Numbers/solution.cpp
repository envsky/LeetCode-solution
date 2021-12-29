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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* output = new ListNode(0);
        ListNode* prev = output;
        int sum = 0;
        while(l1 != nullptr || l2 != nullptr || sum > 0) {
            if(l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }
            prev->next = new ListNode(sum%10);
            prev = prev->next;
            sum = sum/10;
        }
        prev = output->next;
        delete output;
        return prev;
    }
};