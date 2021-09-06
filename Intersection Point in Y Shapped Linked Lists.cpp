int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    
    //method 1 - using sets
    
    set<Node*>s;
    Node*curr=head1;
    
    while(curr!=NULL)
    {
        s.insert(curr);
        curr=curr->next;
        
    }
    curr=head2;
    
    while(curr!=NULL)
    {
        if (s.find(curr)!=s.end())
        {
            return curr->data;
        }
        curr=curr->next;
    }
    return -1;
    // t.c=O(n)
    // s.c=o(n) for set
    
    
    // method 2
    
    int len1=0,len2=0;
    
    Node*curr=head1;
    while(curr!=NULL)
    {
        len1++;
        curr=curr->next;
    }
    
    curr=head2;
    while(curr!=NULL)
    {
        len2++;
        curr=curr->next;
    }
    
    if (len1>len2)
    {
        while(len1-len2>0)
        {
            head1=head1->next;
            len1--;
        }
        
    }
    else if (len2>len1)
    {
        while(len2-len1>0)
        {
            head2=head2->next;
            len2--;
        }
    }
    
    while(head1!=head2)
    {
        head1=head1->next;
        head2=head2->next;
    }
    if (head1==NULL)
    {
        return -1;
    }
    else
     return head1->data;
    
    // t.c = O(m)+O(m-n)+O(n)+O(n)  m=len of head1 , n=len of head2
    // s.c=O(1)
    
    
    // method 3- most optimised
    
    Node*head_1=head1;
    Node*head_2=head2;
    
    while(head_1!=head_2)
    {
        
        head_1=head_1==NULL?head2:head_1->next;
        head_2=head_2==NULL?head1:head_2->next;
        //cout<<head1->data<<" "<<head2->data<<endl;
    }
    if (head_1==NULL)
    {
        return -1;
    }
    else
    {
        return head_1->data;
    }
  // S.C=O(1)
  // T.C=O(m) +O(n) in worst case when there is no intersection point.
 
    
}
