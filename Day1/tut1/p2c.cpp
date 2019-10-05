#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {    for(int j=0;j<i+1;j++)

            {



            cout<<c;
        c++; }
        }
        else
        {
            for(int j=0;j<i+1;j++)

            {



            cout<<"-"<<c;
        c++; }

        }
        cout<<endl;

    }
}
