//max contigous slice sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ms=INT_MIN;
    int cs=0;
    for(int i=0;i<n;i++)
    {
        cs+=a[i];
        if(cs<0)
        {
            cs=0;
        }
        if(cs>ms)
        {
            ms=cs;
        }

    }
    cout<<ms;
    return 0;
}
/*
ips
8
-2 -3 4 -1 -2 1 5 -3
5
3 2 -6 4 0
*/
