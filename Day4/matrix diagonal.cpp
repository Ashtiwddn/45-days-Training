#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int m[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>m[i][j];
    int k= 2*n-1;
    for(int k=1;k<=2*n-1;k++)
    {
        int a=k-1 ,b=0,c=n-1,d=k-4;

        if(k<=4)
            while(a>=0)
            {
                cout<<m[a--][b++]<<" ";
            }

            else
            {
                while(d<=n-1)
                {
                    cout<<m[c--][d++]<<" ";

                }
            }
    }
}
