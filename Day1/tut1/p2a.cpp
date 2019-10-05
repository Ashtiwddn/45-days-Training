#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
    cout<<"n= ";
    cin>>n;
 int p=1, c=0;
    for(int i=1;i<=n;i++)
    { for(int j=1;j<=i;j++)
       {  cout<<c;
         int t=p;
         p=c;
         c=t;

       }

cout<<"\n";
}

}
