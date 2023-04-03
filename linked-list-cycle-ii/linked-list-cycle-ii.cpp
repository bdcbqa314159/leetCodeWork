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
        
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
            
            if (slow == fast) break;
        }
        
        if (!fast->next || !fast->next->next) return nullptr;
        
        ListNode* node = head;
        
        while(node->next){
            if (node == slow) return slow;
            node = node->next;
            slow = slow->next;
        }
        
        
        
        return nullptr;
    }
};