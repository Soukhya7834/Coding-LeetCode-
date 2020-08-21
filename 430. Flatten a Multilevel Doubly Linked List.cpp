class Solution {
public:
    Node* flatten(Node* head) {
        
        stack<Node*> st;
        
        Node* temp = head;
        //Node* tail = NULL;

        while(head || !st.empty()){
            
            if(temp && temp->child){
                if(temp->next)
                    st.push(temp->next);
                temp->next = temp->child;
                temp->next->prev = temp;
                temp->child = NULL;
            }
            
            else if(!temp->next && !st.empty()){
                temp->next = st.top();
                temp->next->prev =temp;
                st.pop();
            }
            
            else{
                temp = temp->next;
            }
        }
        return head;
    }
};
