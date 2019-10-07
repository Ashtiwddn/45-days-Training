#include<bits/stdc++.h>
using namespace std;
int rev(int n)
{static int x=0;

    if(n<10)
        return n;
      int  y=rev(n/10);
        x++;
    return( y + (n%10)*pow(10,x));

}

int main()
{
    int n;
    cout<<"n=";
    cin>>n;
    cout<<rev(n);
      return 0;
}

