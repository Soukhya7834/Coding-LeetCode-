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
    ListNode* deleteDuplicates(ListNode* head) {
        
        ListNode* aux = new ListNode(-1);
        ListNode* iter = aux;

     
        while(head != NULL){
            //s.insert(temp->val);
           
            if(head->next  &&  head->val == head->next->val){
                int curr = head->val;
                while(head && head->val == curr){            //1 2 2 3 4 4   null
                    head = head->next;
                }
            }
                else{
                iter->next = head;
                iter = iter->next;
                head = head->next;
                }
            
            }
            iter->next = NULL;
        
        return aux->next;
        
    }
};
