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
    void reorderList(ListNode* head) {
        if (!head || !head -> next || !head -> next -> next)   return ; //since fast will using next two nodes, dealing with exception
        ListNode* slow = head ; //setup slow pivot
        ListNode* fast = head ; //setup fast pivot
        while (fast -> next && fast -> next -> next){   //while fast pivot still not reaching the end
            slow = slow -> next ;
            fast = fast -> next -> next ;   //find the mid node
        }
        ListNode* ans = slow -> next ;  //copy the resting half listnode
        slow -> next = nullptr ;    //storing the first half listnode
        ans = reverseList(ans) ;    //filping the second hald listnode

        while(ans){
            ListNode* temp = ans -> next ;  //record the resting node in ans
            ans -> next = head -> next ;    //replace the next node in ans to original next node
            head -> next = ans ;    //head next node link to ans
            head = ans -> next ;    //head has been replaced from ans
            ans = temp ;    //replace to stored ans
        }
    }
    ListNode* reverseList(ListNode* head){ //refer to Q2
        if (!head)
            return nullptr ;
        
        ListNode* reversed = head ;
        head = head -> next ;
        reversed -> next = nullptr ;
        
        while (head){
            ListNode* temp = head -> next ;
            head -> next = reversed ;
            reversed = head ;
            head = temp ;
        }
        return reversed ;
    }
};