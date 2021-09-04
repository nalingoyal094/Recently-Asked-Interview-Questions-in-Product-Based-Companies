class Solution
{
    public:
    
     Node* reverse(Node*d)
     {
         if (d==NULL)
         return d;
        
         if (d->next==NULL)// d d1 d2
         {
             return d;
         }
           
         Node*d1=d->next;
         if (d1!=NULL)
         {
          Node*d2=d->next->next;
        
       d->next=NULL; 
     
          
         while(d2!=NULL)
         {
             d1->next=d;
             d=d1;
             d1=d2;
             d2=d2->next;
         }
        
         d1->next=d;
        
         }
         
        
        
          return d1;
     }
      
    
    void rearrange(struct Node *odd)
    {
        Node*t=odd;
        Node*d=odd->next;
        Node*t1=t;
        Node*d1=d;
        
        
        while( d && t && d->next && t->next!=NULL)
        {
            t->next=t->next->next;;
            d->next=d->next->next;
            t=t->next;
            d=d->next;
        }
        
        
        
        t->next=reverse(d1);
        
        
    }
};
