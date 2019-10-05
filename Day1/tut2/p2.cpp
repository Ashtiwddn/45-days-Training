#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c;
    cout<<"r and c = ";
    cin>>r>>c;
    int osp=-1;
    int isp=6;
    for(int i=0;i<r;i++)
    { osp++;
        if(i==0 || i== r-1)
        {        for(int j=1;j<=osp;j++)
            cout<<" ";
        for(int j=0;j<c;j++)
            cout<<"*";
        }
        else
        {
             for(int j=1;j<=osp;j++)
            cout<<" ";
            cout<<"*";
             for(int j=1;j<=isp;j++)
            cout<<" ";
            cout<<"*";

        }
       /*
        for(int j=1;j<=sp;j++)
            cout<<" ";
        for(int j=0;j<n;j++)
            cout<<"*";  */
        cout<<endl;
    }
}
