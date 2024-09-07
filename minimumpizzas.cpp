#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    if((x*y)%4==0){
	        cout<<(x*y)/4<<endl;
	        
	    }
	    else{
	        cout<<((x*y)/4)+1<<endl;
	    }
	}

}
