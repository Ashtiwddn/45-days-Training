#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        for(long long int i=1;i<=1.0e12;i++)
        {
            s+=i;
        }

        cout<<s[k-1]<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
