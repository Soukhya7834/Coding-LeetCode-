class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        ListNode* curr, *next, *prev;
        prev = NULL;
        curr = head;
        int c=0;
        
        while(curr != NULL && c < k){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            c++;
        }
        next = curr->next;
        reverseKGroup(next, k); 
    
    return prev;
    }
};
