vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        //method 1 - t.c= O(n^2)
        
        //method 2
        
        stack<long long int >s;
        
        for (int i=0;i<n;i++)
        {
            if (s.empty())
            {
                s.push(i);
            }
            else if (!s.empty() && arr[s.top()]>=arr[i])
            {
                   s.push(i);
            }
            else
            {
                while(!s.empty() && arr[s.top()]<arr[i])
                {
                    arr[s.top()]=arr[i];
                    s.pop();
                   
                }
                 s.push(i);
            }
            
        }
        while(!s.empty())
        {
            arr[s.top()]=-1;
            s.pop();
        }
        
        return arr;
        
        
        
        
        
    }
