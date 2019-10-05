#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
    cout<<"n= ";
    cin>>n;

    for(int i=0;i<n;i++)
    { int start=n-i;
     int space=i;
     for(int j=0;j<space;j++)
        cout<<" ";
     for(int j=start;j>=1;j--)
        cout<<j;
cout<<"\n";
}

}
