    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        vector<string> v(numRows);
        int k=1;
        int inc=0;
        for(int i=0;i<s.length();i++)
        {   if(inc)
            k++;
         else
             k--;
            v[k]=v[k]+s[i];
            if(k==numRows-1 || k==0)
            {
                inc=!inc;
            }
            
        }
        s="";
        for(int i=0;i<numRows;i++)
            s=s+v[i];
    return s;
    }