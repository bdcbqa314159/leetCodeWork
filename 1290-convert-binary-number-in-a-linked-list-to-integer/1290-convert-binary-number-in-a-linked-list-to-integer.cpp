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
   
    int getDecimalValue(ListNode* head) {
        int result = head->val;
        while(head->next){
            result = 2*result + head->next->val;
            head = head->next;
        }
        
        return result;

    }
};