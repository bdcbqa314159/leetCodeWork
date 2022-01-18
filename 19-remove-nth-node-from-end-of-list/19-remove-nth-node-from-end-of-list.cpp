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
        ListNode ans(0);
        ans.next = head;
        
        ListNode* first = &ans;
        ListNode* second = &ans;
        
        for (int i = 1; i<=n; i++)
            first = first->next;
        
        if (!first) return head->next;
        
        while(first->next){
            
            first = first->next;
            second = second->next;
            
        }
        
        second->next = second->next->next;
        
        return ans.next;
        
    }
};

