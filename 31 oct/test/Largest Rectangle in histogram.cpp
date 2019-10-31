  int largestRectangleArea(vector<int>& h) {
        
        stack<int> s;
        int maxarea=0;
        int tp;
        int area_top=0;
        int i=0;
        while(i<h.size())
        {
            
            if(s.empty() || h[s.top()]<h[i])
                s.push(i++);
            else
            {
                int tp=s.top();
                s.pop();
                
                area_top=h[tp]*(s.empty()?i:i-s.top()-1);
                maxarea=max(maxarea,area_top);
                
            }
            
        }
        
        while(s.empty()==false)
        {
            int tp=s.top();
                s.pop();
                
                area_top=h[tp]*(s.empty()?i:i-s.top()-1);
                maxarea=max(maxarea,area_top);
            
        }
        return maxarea;
        
    }