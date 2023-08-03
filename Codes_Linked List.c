//Is there a cycle in linked list ??------------------------------------------------

bool hasCycle(struct ListNode *head) {

    struct ListNode *i,*j;
    i=j=head;  

    if(head==NULL)
        return false;
    
    else
    {
        while(i!=NULL && i->next !=NULL)
        {
            j=j->next;
            i=i->next->next;

            if(i==j)
            {
                return true;
            }
        }
    }
    return false;
    
}
----------------------------------------------------------------------------------
  
