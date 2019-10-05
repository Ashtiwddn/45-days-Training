#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int sp,st=-1;
    for(int i=1;i<=n;i++)
    { sp=n-i;
      st=st+2;
      for(int j=1;j<=sp;j++)
        cout<<" ";
      for(int j=1;j<=st;j++)
        cout<<"*";
    cout<<"\n";
    }
}
