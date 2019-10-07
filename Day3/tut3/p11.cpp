#include<bits/stdc++.h>
using namespace std;
int maxm(vector<int> a,int s)
{
    if(s==0)
        return a[0];

return max(a[s],maxm(a,s-1));

}
int main()
{ int n;
vector<int> a;
    cout<<"size=";
    cin>>n;
    int k;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        a.push_back(k);
    }
    cout<<maxm(a,n-1);
}
