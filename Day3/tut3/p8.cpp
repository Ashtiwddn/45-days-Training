#include<bits/stdc++.h>
using namespace std;
int gcdn(int m,int n,int i)
{
    if(m%i==0 && n%i==0)
    return i;
    return gcdn(m,n,i-1);
}
int main()
{
    int m,n;
    cout<<"m and n=";
    cin>>m>>n;

    cout<<gcdn(m,n,min(m,n));


}
