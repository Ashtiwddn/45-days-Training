#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"n = ";
    cin>>n;
    n=n-2;
    if(n%2==0)
    {
        n=n/2;
        cout<<pow(3,n);
    }
    else
    {
        n=(n+1)/2;
        cout<<pow(2,n);
    }
}
