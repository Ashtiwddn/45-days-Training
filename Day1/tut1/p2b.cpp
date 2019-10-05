#include<bits/stdc++.h>
using namespace std;
int main()
{ int n;
    cout<<"n= ";
    cin>>n;
    int sp=1;
    int sop=1;
    int inc=1;
    for(int i=1;i<=n;i++)
    {
           if(i%2==0)
           {  int c=sp;
               for(int j=1;j<=i;j++)
               {
                   cout<<c<<" ";
                   c--;
               }
               sop=sp+1;
           }
           else{

                for(int j=1;j<=i;j++)
                {
                    cout<<sop<<" ";
           sop++;
                }

           }
           inc++;
           sp=sp+inc;




cout<<"\n";
}

}
