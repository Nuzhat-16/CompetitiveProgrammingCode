#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
#define int long long

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count_0=0;
        int count_1=0;
        for (int i=0;i<n;i++){
            if(s[i]=='0') 
            count_0++;
            else count_1++;
        }
        int flip=0;
        