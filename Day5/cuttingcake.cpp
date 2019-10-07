//cutting cake
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,x,y,i,j;
    int v1;
    vector<int> v;
    vector<int> h;
    vector<int> a;
    v.push_back(0);
    h.push_back(0);
    int k;
    cout<<"dimensions of cake x and y =";
    cin>>x>>y;

    cout<<" No. of Vertical and horizontal cuts=";
    cin>>v1>>h1;
    for(i=1;i<=v1;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    v.push_back(x);
    for(i=1;i<=h1;i++)
    {
        cin>>k;
        h.push_back(k);
    }

    h.push_back(y);

    for(i=1;i<v.size();i++)
    {
        for(j=1;j<h.size();j++)
        {
            a.push_back((v[i]-v[i-1])*(h[j]-h[j-1]));
        }
    }
    sort(a.begin(),a.end());
  for(i=0;i<a.size();i++)
        cout<<a[i]<<" ";
   // cout<<"k=\n";
   // cin>>k;
   // cout<<a[k-1];
}
