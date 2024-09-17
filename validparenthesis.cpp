#include<bits/stdc++.h>
using namespace std;
 bool isValid(string s) {
          stack<char> stack;  
        
        for (char c : s) {  
            if (c == '(')
                stack.push(')');
            else if (c == '{')
                stack.push('}');
            else if (c == '[')
                stack.push(']');
            else {
               
                if (stack.empty() || stack.top() != c)
                    return false;
                stack.pop();
            }
        }
        return stack.empty();  
    }
    int main(){
 string s;
   
    cin >> s;

    if (isValid(s)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}