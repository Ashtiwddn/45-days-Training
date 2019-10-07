#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
int     lm[n],rm[n];
int    mx=INT_MIN;
    for(i=0;i<n;i++)
       { mx=max(mx,a[i]);
           lm[i]=mx;       }
            mx=INT_MIN;
    for(i=n-1;i>=0;i--)
       { mx=max(mx,a[i]);
           rm[i]=mx;       }
  /*  for(i=0;i<n;i++)
    cout<<lm[i]<<" ";
    cout<<endl;
  for(i=0;i<n;i++)
    cout<<rm[i]<<" ";
    cout<<endl; */
    int s=0;
  for(i=0;i<n;i++)
  {
      s+=abs(a[i]-min(lm[i],rm[i]));
  }
  cout<<s;
}
/*
ips-
9
2 1 0 3 0 0 1 0 2
op-
10
*/
