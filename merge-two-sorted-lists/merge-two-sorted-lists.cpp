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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (!list1) return list2;
        if (!list2) return list1;
        
        ListNode *out = 0;
        if (list1->val<list2->val){
            out = list1;
            out->next = mergeTwoLists(list1->next, list2);
        }
        
        else{
            out = list2;
            out->next = mergeTwoLists(list1, list2->next);
        }
        return out;
    }
};