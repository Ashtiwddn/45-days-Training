#include<bits/stdc++.h>
using namespace std;
int tobin(int n)
{
    static int x=-1;
    if(n==1||n==0)
        return n;
    return(tobin(n/2)*10+(n%2));
}
int main()
{ int n;
    cout<<"n=";
    cin>>n;
    cout<<tobin(n);
}
