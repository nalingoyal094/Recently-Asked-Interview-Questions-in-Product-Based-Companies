Node* sortedMerge(Node* head1, Node* head2)  
{  
    Node*dummy=new Node(0);
    
    Node*is=dummy;
    
    Node*ptr1=head1;
    Node*ptr2=head2;
    
    while(ptr1 && ptr2)
    {
        if (ptr1->data<=ptr2->data)
        {
            is->next=ptr1;
            is=is->next;
            ptr1=ptr1->next;
        }
        else
        {
            is->next=ptr2;
            is=is->next;
            ptr2=ptr2->next;
        }
    }
    
    while(ptr1!=NULL)
    {
        is->next=ptr1;
        is=is->next;
        ptr1=ptr1->next;
        
    }
    while(ptr2!=NULL)
    {
        is->next=ptr2;
        is=is->next;
        ptr2=ptr2->next;
        
    }
    return dummy->next;
    
    
}  
