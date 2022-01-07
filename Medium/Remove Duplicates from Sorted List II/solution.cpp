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
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int, int> map;
        ListNode* temp = head;
        while(temp != nullptr) {
            map[temp->val]++;
            temp = temp->next;
        }
        temp = head;
        while(temp != nullptr) {
            if(map[head->val] > 1) {
                head = head->next;
                temp = head;
            }
            else if(temp->next != nullptr && map[temp->next->val] > 1) {
                temp->next = temp->next->next;
            }
            else
                temp = temp->next;
        }
        return head;
    }
};