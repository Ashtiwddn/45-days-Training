static int x = [](){ios::sync_with_stdio(false); cin.tie(nullptr); return 0; }();
class Solution {
public:
    int myAtoi(string s) {
        
        stringstream ss(s);
     int t=0;   
     ss>>t;
        return t;
        }
};