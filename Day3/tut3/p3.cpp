#include<bits/stdc++.h>
using namespace std;
int mul(int m,int n)
{
    if(n==1)
        return m;
      return(m+mul(m,n-1));
}
int main()
{
    int m,n;
    cout<<"m and n=";
    cin>>m>>n;
    cout<<mul(m,n);
}
