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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || !k) return head;
        ListNode *tail = head, *ans = head;
        
        int len = 1;
        while (tail && tail->next){
            len++;
            tail = tail->next;
        }
        
        k%=len;
        if (!k) return head;
        
        int n = len-k;
        while (--n){
            ans = ans->next;
        }
        
        ListNode *t = ans->next;
        ans->next = 0;
        ans = t;
        
        tail->next = head;
        
        
    
        return ans;
    }
};