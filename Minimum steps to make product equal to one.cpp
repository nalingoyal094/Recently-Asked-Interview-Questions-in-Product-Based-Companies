class Solution {
  public:
    
    int makeProductOne(int a[], int N) 
    {
        int moves=0;
        int zero=0;
        int neg=0;
        for (int i=0;i<N;i++)
        {
            if(a[i]>0)
            {
                moves+=abs(a[i]-1);
            }
            else if (a[i]<0)
            {
                moves+=abs(a[i]+1);
                neg++;
            }
            else
            {
                moves++;
                zero=1;
            }
        }
        
        if (neg%2!=0)
        {
            if (zero)
            {
                return moves;
            }
            return (moves+2);
        }
        return moves;
        
    }
};
