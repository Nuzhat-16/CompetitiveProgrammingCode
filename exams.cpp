#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int t; 
 cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        
        int total=x*y;
        int fifty=total/2;
        if(fifty>=z){
            cout<<"no\n";
        }
        else{
            cout<<"yes\n";
        }
}
}
