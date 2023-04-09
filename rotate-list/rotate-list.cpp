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
        
        int len = 1;
        
        ListNode *tail = head, *ans = head;
        
        while (tail && tail->next){
            len++;
            tail = tail->next;
        }
        
        k %= len;
        if (!k) return head;
        int n = len -k;
        
        while (--n){
            ans = ans->next;
        }
        
        ListNode *temp = ans->next;
        ans->next = 0;
        ans = temp;
        
        tail->next = head;
        
        return ans;
        
    }
};