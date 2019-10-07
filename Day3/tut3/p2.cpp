#include<bits/stdc++.h>
using namespace std;
bool pl(vector<int>v,int beg,int en)
{
    if(beg>=en)
        return true;
    if(v[beg]!=v[en])
      return false;

        return(pl(v,beg+1,en-1));


}
int main()
{
    int n;
    vector<int>a;
    cout<<"n= ";
    cin>>n;
    int t=n;
    while(t)
    {
        a.push_back(t%10);
        t=t/10;

    }
    pl(a,0,a.size()-1)==0?cout<<"Not Pallindrome":cout<<"Pallindrome";
}
