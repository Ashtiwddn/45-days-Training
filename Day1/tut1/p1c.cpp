#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
    cout<<"n= ";
    cin>>n;

    for(int i=1;i<=n;i++)
    { int space=n-i;
     for(int j=0;j<space;j++)
        cout<<" ";
     for(int j=0;j<i;j++)
        cout<<"*";
cout<<"\n";
}

}
