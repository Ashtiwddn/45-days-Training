#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"n = ";
    cin>>n;

int c=n-1;
int k=1;
    for(int i=1;i<=2*n+1;i++)
    {// cout<<i<<"*";
        if(i<=n+1)
        {c++;
            for(int j=1;j<=i;j++)
            {
               cout<<c;
            }

        }
        else{ c--;
                for(int j=1;j<=n+1-k;j++)
            {
               cout<<c;
            }
            k++;

        }
         cout<<endl;
    }
}
