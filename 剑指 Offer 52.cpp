/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *> record ;
        ListNode *temp = headA ;
        while (temp){
            record.insert(temp) ;
            temp = temp -> next ;
        }
        temp = headB ;
        while (temp){
            if (record.count(temp)) return temp ;
            temp = temp -> next ;
        }
        return nullptr ;
    }
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *pA = headA, *pB = headB ;
        
        while (pA != pB) {
            pA = pA != NULL ? pA->next : headB ;
            pB = pB != NULL ? pB->next : headA ;
        }
        return pA ;
    }
};
