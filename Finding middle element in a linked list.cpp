int getMiddle(Node *head)
{
     Node*slow=head;
     Node*fast=head;
     int n=1;
     
     while(fast->next && fast->next->next)
     {
         n+=2;
         
         slow=slow->next;
         fast=fast->next->next;
     }
     
     if (fast->next)
       slow=slow->next;
     
     return slow->data;
}
