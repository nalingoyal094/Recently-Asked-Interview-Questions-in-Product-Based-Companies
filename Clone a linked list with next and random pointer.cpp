

Node *copyList(Node *head)
    {
        map<Node*,Node*>mp;
        
        Node*curr=head;
        
        while(curr!=NULL)
        {
            mp[curr]=new Node(curr->data);
            curr=curr->next;
        }
        curr=head;
        
        while(curr!=NULL)
        {
            mp[curr]->next=mp[curr->next];
            mp[curr]->arb=mp[curr->arb];
            curr=curr->next;
        }
        return mp[head];
        
        
    }

// t.c=O(n)
// s.c=O(n)

















 Node *copyList(Node *head)
    {
        
        Node*curr=head;
        Node*agla=head->next;
        
        while(curr!=NULL)
        {
            curr->next=new Node(curr->data);
            curr->next->next=agla;
            curr=agla;
            
            if (agla)
            agla=agla->next;
        }
        
        curr=head;
        
        while(curr!=NULL )
        {
            
            
            if (curr->arb==NULL)
            {
                curr->next->arb=NULL;
            }
            else
            curr->next->arb=curr->arb->next;
            curr=curr->next->next;
        }
        
        Node*dummy=new Node(0);
        Node*ans=dummy;
        curr=head;
        
        while(curr)
        {
            dummy->next=curr->next;
            curr->next=curr->next->next;
            dummy=dummy->next;
            curr=curr->next;
            
        }
        
        
        
        return ans->next;
        
        
    }


//t.c = O(n)
// s.c =O(1) ...dont consider space taken by single nodes.











