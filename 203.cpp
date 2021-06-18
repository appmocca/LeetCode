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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *cpHead = new ListNode(0, head) ;  //Initialize cpHead start from 0 then the head
        ListNode *tmp = cpHead ;    //Mofidy the copy of cpHead
        while (tmp -> next){
            if (tmp -> next -> val == val)
                tmp -> next = tmp -> next -> next ;
            else
                tmp = tmp -> next ;
        }
        return cpHead -> next ;
    }
};