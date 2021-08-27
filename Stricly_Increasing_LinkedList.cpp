/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
bool solve(LLNode* head) {
    bool temp=true;
  //while our head and next element is not null
    while(head!=nullptr && head->next !=nullptr)
    {
        //check whether heads vvalue less than the next value
        if(head->val < head->next->val)
        {
            temp=true;
        }
        //check whether heads vvalue greater than the next value
        else if(head->val >= head->next->val)
        {
            //if it is leave from the loop. you dont need to check all
            temp =false;
            break;
        }
       
        head= head->next;
    }
    return temp;
}