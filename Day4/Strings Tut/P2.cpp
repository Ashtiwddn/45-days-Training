#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>47 && s[i]<58) //or use isalpha(s[i]) or isdigit(s[i])
            c++;
    }
    cout<<c;
}
