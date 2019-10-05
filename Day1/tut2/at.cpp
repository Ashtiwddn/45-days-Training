
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    { int n;
     cin>>n;
     int f=0;
     int k;
     vector<int>a;
        for(int i=0;i<n;i++)
        {  cin>>k;
         a.push_back(k);
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
    /* for(int i=0;i<n-1;i++)
     {
       for(int j=n-1;j>i;j--)

       {   if(a[i]<=a[j])
         {
             cout<<j-i<<endl;
           cout<<i<<a[i]<<" "<<j<<" "<<a[j];
             f=1;

         }

     }
         if(f)
          break;
  //   }
   //  if(!f)
     cout<<"-1"<<endl;
    }  */
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
