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
    
    ListNode *frontPointer;
    
    bool helper(ListNode *current){
        if (current){
            if (!helper(current->next)) return false;
            if (current->val != frontPointer->val) return false;
            
            frontPointer = frontPointer->next;
        }
        return true;
    }
    
    
    bool isPalindrome(ListNode* head) {
        frontPointer = head;
        return helper(head);
    }
};