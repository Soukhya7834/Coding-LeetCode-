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
    ListNode *detectCycle(ListNode *head) {
        if(!head) return 0;
        
        ListNode* ptr = head;
        unordered_set<ListNode*> a;
        
        while(ptr != NULL){
        if(a.find(ptr)  != a.end())
            return ptr;         //we return ptr to teh cycle node, main fun wil decide the index
        else 
            a.insert(ptr);
        ptr = ptr->next;
        }
        
        return 0;
    }
};
