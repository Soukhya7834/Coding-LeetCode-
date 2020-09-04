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
        
        if(!head || !head->next || k==0) return head;
        
        int l=1;    //find length()
        
        ListNode* curr = head;
        while(curr->next){
            curr = curr->next;   l++;
        }
        
        curr->next = head;          //make it circular now

        k = l - (k % l);
        while(k--)
            curr = curr->next ;        
                
        //in any prob, we're allowed to makea SLL to CLL, provided we break the circular link before passing to amke it into a SLL again. 
            
        //1->2->3->4->5   curr moves from 5 to 1, then from 1 to 3, curr not points to 3, just before the new head 
        
        
        head = curr->next;               //4 now becomes new head;
        curr->next = NULL;              // makes   1->2->3->NULL
        
        //in right order now, 4->5->1->2->3->NULL, 5->1 coz its circular
        
        return head;
    }
};
