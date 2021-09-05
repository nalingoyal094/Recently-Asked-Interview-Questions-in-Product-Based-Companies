class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node*pre;
        Node*slow=head;
        Node*fast=head;
        int flag=0;
    
        while(fast && fast->next  )
        {
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast)
        {
            //cout<<"yes"<<endl;
        //    cout<<slow->data<<endl;
            flag=1;
           // cout<<slow->data<<endl;
            break;
        }
            
        }
        
        slow=head;
    
    if (slow==fast)
    {
        if (slow==head)
        pre->next=NULL;
          
    }
    
    
    //Node*pre;
        if (flag==1 )
        {
            while(slow!=fast)
            {
                pre=fast;
                slow=slow->next;
                fast=fast->next;
            }
             pre->next=NULL;
        }
       
        
        
        
    }
};
