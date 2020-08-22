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
        ListNode* temp = head;
        while(temp != NULL && temp->next != NULL){
            if(temp->val == temp->next->val){
                ListNode* t = temp->next;
                temp->next = temp->next->next;
                delete(t);
                cout << temp->val<<endl;            //change temp->next, temp will still point to same val
            }
            else
                temp = temp->next;         //change temp, temp will now point to next val
        }
        return head;
    }
};

/*
[1,1,2,3,3]
stdout
1
3

3->3->NULL    becomes 3->NULL
last 3->next becomes, so while fails, done
*/
