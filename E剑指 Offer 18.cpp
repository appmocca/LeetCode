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
    ListNode* deleteNode(ListNode* head, int val) { //Better solution
        if (!head)      return nullptr ;
        head -> next = deleteNode(head -> next, val) ;
        if (head -> val == val)     return head -> next ;
        return head ;
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
    ListNode* deleteNode(ListNode* head, int val) {
        if (head -> val == val)     return head -> next ;
        ListNode* tmp = head ;
        while (tmp -> next){
            if (tmp -> next -> val == val){
                tmp -> next = tmp -> next -> next ;
                return head ;
            }
            tmp = tmp -> next ;
        }
        return head ;
    }
};