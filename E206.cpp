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
    using LN = ListNode ;
    ListNode* reverseList(ListNode* head) {
        LN *curr = head, *prev = nullptr, *temp ;
        while (curr){
            temp = curr -> next ;
            curr -> next = prev ;
            prev = curr ;
            curr = temp ;
        }
        return prev ;
    }
};