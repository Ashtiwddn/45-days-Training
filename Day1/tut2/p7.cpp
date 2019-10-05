#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int col=2*n-1;
    int st=n,i,j;
    int nr=1;
    for(i=1;i<=2*n-1;i++)
    {
        if(i<=n)
        {
            for(j=1;j<=nr;j++)
                cout<<st;
                int c=st;
                for(j=1;j<=n-i;j++)
                 {
                      c--;
                     cout<<c;


                 }
                  for(j=1;j<n-i;j++)
                 { c++;
                     cout<<c;
                     //c++;

                 }
                 for(j=1;j<=nr;j++)
             {
                 cout<<st;
             }

                   st--;
                   nr++;



        }
        cout<<endl;

    }
}
