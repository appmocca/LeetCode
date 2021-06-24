/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
#define LN ListNode
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        LN *pre = nullptr, *curr = head ;
        while (curr){
            LN *tmp = curr -> next ;
            curr -> next = pre ;
            pre = curr ;
            curr = tmp ;
        }
        return pre ;
    }
};