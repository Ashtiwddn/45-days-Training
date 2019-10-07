#include<bits/stdc++.h>
using namespace std;
int todeci(int n)
{
    static int x=-1;
    if(n==0)
        return 0;
    return((n%10)*pow(2,++x)+todeci(n/10));
}
int main()
{
    int n;
    cout<<"n= ";
    cin>>n;
    cout<<todeci(n);
}
