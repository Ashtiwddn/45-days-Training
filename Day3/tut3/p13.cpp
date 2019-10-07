#include<bits/stdc++.h>
using namespace std;
void rev(int a[],int b,int e)
{
    if(b>=e)
        return ;
    swap(a[b],a[e]);
    rev(a,b+1,e-1);
}
int main()
{
    int n;
    cout<<"size= ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        rev(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
