#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cout<<"k=";
    cin>>k;
    int ms=0;
    int cs=0;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<k;i++)
        ms+=a[i];
        cs=ms;
      //  cout<<"cs="<<cs<<"ms="<<ms<<endl;
//
     for(int i=1;i<=n-k;i++)
    { cs=cs-a[i-1]+a[i+k-1];
       ms=max(cs,ms);

      // cout<<"cs="<<cs<<"ms="<<ms<<endl;
    }
  //  cout<<ms;

}


