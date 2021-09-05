Node*merge(Node*temp,Node*temp1)
{
   // cout<<temp->data<<" "<<temp1->data<<endl;
    temp->next=NULL;
    Node*dummy=new Node(0);
    Node*ans=dummy;
    while(temp!=NULL && temp1!=NULL)
    {
        if (temp->data<=temp1->data)
        {
            dummy->bottom=temp;
            temp=temp->bottom;
            dummy=dummy->bottom;
            
        }
        else
        {
            dummy->bottom=temp1;
            temp1=temp1->bottom;
            dummy=dummy->bottom;
        }
        
    }
    if(temp!=NULL)
    {
        dummy->bottom=temp;
        
    }
    if(temp1!=NULL)
    {
        dummy->bottom=temp1;
    }
    
    Node*s=ans->bottom;
    
   
    
    return ans->bottom;
    
}


Node *flatten(Node *root)
{
    if (root==NULL or root->next==NULL)
    {
        return root;
    }
//return root;
  return merge(root,flatten(root->next));
    
   
}
