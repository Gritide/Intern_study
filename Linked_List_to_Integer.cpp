int solve(LLNode* node) {
    LLNode *temp=node;
    int count=-1;
    int power=0;
    while(temp!=nullptr)
    {
        count++;
        temp=temp->next;

    }
    while(node !=nullptr  && count>=0)
    {
        if(node->val==1)
        {
            power =power+pow(2,count);

        }
        node=node->next;
        count--;
        
    }
    return power;
}