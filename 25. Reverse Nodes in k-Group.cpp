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
        reverseKGroup(next, k); /**
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
    
    int length(ListNode * node){
            int count=0;
        while(node){
                count++;
            node=node->next;
        }
        return count;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(length(head) < k)return head;
        
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
        //next = curr->next;
        head->next = reverseKGroup(curr, k); 
    
    return prev;
    }
};


//[1,2,3,4,5]    this test case is important.
//2
