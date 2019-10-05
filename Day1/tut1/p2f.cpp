#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int sp,st=2*n-1 +2;
    for(int i=n;i>=1;i--)
    {
      sp=n-i;
      st=st-2;
      for(int j=1;j<=sp;j++)
        cout<<" ";
      for(int j=1;j<=st;j++)
        cout<<"*";
    cout<<"\n";
    }
}

