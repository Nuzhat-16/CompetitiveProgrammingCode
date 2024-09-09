#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int ans = 0, cn = 0;
    while(getline(cin,s)) {
        if(s[0] == '+') cn++;
        else if(s[0] == '-') cn--;
        else {
            int len = int(s.size() - s.find(':')) - 1;
            ans += cn*len;
        }
    }
    cout << ans << endl;
    return 0;
}