Node*reverse(Node*head)
{
    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    
    Node*a=head;
    Node*b=head->next;
    Node*c=head->next->next;
    a->next=NULL;
    while(c!=NULL)
    {
        
        b->next=a;
        a=b;
        b=c;
        c=c->next;
        
    }
    b->next=a;
    return b;
    
}



void reorderList(Node* head) 
{
    if (head==NULL || head->next==NULL)
    {
        return;
    }
    
    int len=0;
    Node*curr=head;
    while(curr)
    {
        len++;
        curr=curr->next;
    }
    
    int mid=(len)/2;
    curr=head;
    Node*pre=NULL;
    while(mid>0)
    {
        pre=curr;
        curr=curr->next;
        mid--;
    }
    
    pre->next=NULL;
    
    
    
   curr=reverse(curr);
   
   Node*temp=curr;
   int c=0;
   while(temp!=NULL)
   {
     //  cout<<temp->data<<" ";
       temp=temp->next;
   }
  // cout<<endl;
   
   
   temp=head;
  // int c=0;
   while(temp!=NULL)
   {
      // cout<<temp->data<<" ";
       temp=temp->next;
   }
 //  cout<<endl;
   
   
   
    Node*ans=head;
    
    pre=NULL;
    
    while(head!=NULL && curr!=NULL)
    {
        Node*next=head->next;
        Node*currnext=curr->next;
        
        pre=curr;
        head->next=curr;
        curr->next=next;
        head=next;
        curr=currnext;
    }
    
      if(len % 2 != 0)
   {
       pre->next = curr;
       curr->next = NULL;
   }
    
    
    
   
}

// t.c =O(n);
// s.c= O(1)

