class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
        //if list is empty
        if(head==nullptr || head->next ==nullptr)
        //return head
        {
            return head;
        }
        ListNode* prev=head;
        ListNode* nextelement=head->next;
        while(nextelement !=nullptr)
        {
            //check whether we have duplicate or not
            if(prev->val  == nextelement->val)
            {
                prev->next=nextelement->next;
                nextelement=nextelement->next;
                //new list moves to the next position
                
            }
            else{
                prev=nextelement;
                nextelement=nextelement->next;
            }      
            
        }
        //return the newnode
        return head;
    }
};