#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"n= ";
    cin>>n;
    int sp=-1;
    for(int i=0;i<n;i++)
    {
        sp++;
        for(int j=1;j<=sp;j++)
            cout<<" ";
        for(int j=0;j<n;j++)
            cout<<"*";
        cout<<endl;
    }
}
