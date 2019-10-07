#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    k=sqrt(n);
    int a[k][k];
    //i=0;j=0;
    int l1rs=0,l1re=k-1,l2ce=,l3ce=0,l4re=1;

    for(c=1;c<=n;)
    {

        for(int i=l1rs,j=l1rs;j<=l1re;j++)
        {a[i][j]=c;
            c++;
        }
        l1rs++;
        l1re--;

        for(int i=l1rs,j=l1re+1;i<=l2ce;i++)
        {
            a[i][j]=c;
            c++;
        }
        l2ce--;

        for(int i=l2ce+2,j=l1re+1;j>=l3ce;j--)
        {
            a[i][j]=c;
            c++;
        }
        l3ce--;
          for(int i=l2ce+2,j=l3ce+1;i>=l4re;i--)
        {
            a[i][j]=c;
            c++;
        }
        l4re++;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
            cout<<a[i][j]<<"   ";
        cout<<endl;
    }

}
