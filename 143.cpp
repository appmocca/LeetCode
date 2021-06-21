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
#define LN ListNode
class Solution {
public:
    void reorderList(LN* head) {
        if (!head || !head -> next || !head -> next -> next)   return ; //since fast will using next two nodes, dealing with exception
        LN* slow = head ; //setup slow pivot
        LN* fast = head ; //setup fast pivot
        while (fast -> next && fast -> next -> next){   //while fast pivot still not reaching the end
            slow = slow -> next ;
            fast = fast -> next -> next ;   //find the mid node
        }
        LN* ans = slow -> next ;  //copy the resting half ListNode
        slow -> next = nullptr ;    //storing the first half ListNode
        ans = reverseList(ans) ;    //filping the second hald ListNode
        while(ans){
            LN* temp = ans -> next ;  //record the resting node in ans
            ans -> next = head -> next ;    //replace the next node in ans to original next node
            head -> next = ans ;    //head next node link to ans
            head = ans -> next ;    //head has been replaced from ans
            ans = temp ;    //replace to stored ans
        }
    }
    LN* reverseList(LN* head){ //refer to Q2
        if (!head)
            return nullptr ;
        
        LN* reversed = head ;
        head = head -> next ;
        reversed -> next = nullptr ;
        
        while (head){
            LN* temp = head -> next ;
            head -> next = reversed ;
            reversed = head ;
            head = temp ;
        }
        return reversed ;
    }
};