/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if (!head) return nullptr;
        ListNode *slow = head, *fast = head;
        
        while (fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }
        
        if (!fast->next || !fast->next->next) return nullptr;
        
        ListNode* node = head;
        while (node->next){
            if (slow == node) return slow;
            slow = slow->next;
            node = node->next;
        }
        
        return nullptr;
    }
};