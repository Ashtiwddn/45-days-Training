#include<bits/stdc++.h>
using namespace std;
int add(int n)
{
    if(n<10)
    return n;
    return(add(n/10)+n%10);
}
int main()
{
    int n;
    cout<<"n= ";
    cin>>n;
    cout<<add(n);
}
