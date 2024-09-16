#include <iostream>
#include <vector>
#include <algorithm>  
using namespace std;
string longestCommonPrefix(vector<string>&strs){
    if(strs.empty()) return "";
    sort(strs.begin(),strs.end());
    string first=strs[0];
    string last=strs[strs.size()-1];
    int i=0;
    while (i < first.length() && i < last.length() && first[i] == last[i]) {
        i++;
        
}
 return first.substr(0, i);



    }
   int main() {
    int n; 
    cin >> n;

    vector<string> strs(n);  

    
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    // Output the longest common prefix
    cout <<  longestCommonPrefix(strs) << endl;

    return 0;
}