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
    
    ListNode *front{};
    
    bool helper(ListNode *node){
        if (node){
            if (!helper(node->next)) return false;
            if (node->val != front->val) return false;
            front = front->next;
        }
        
        return true;
    }
    
    bool isPalindrome(ListNode* head) {
        front = head;
        return helper(head);
    }
};