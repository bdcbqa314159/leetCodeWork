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
        
        ListNode *tail = head, *head2 = head;
        
        while (tail && tail->next){
            len++;
            tail = tail->next;
        }
        
        k %= len;
        
        if (!k) return head;
        
        int n = len - k;
        
        while (--n){
            head2 = head2->next;
        }
        
        ListNode *temp = head2->next;
        head2->next = 0;
        head2 = temp;
        
        tail->next = head;
        return head2;
    }
};