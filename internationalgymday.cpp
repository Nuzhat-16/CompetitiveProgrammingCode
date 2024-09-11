#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int d,x,y;
	    cin>>d>>x>>y;
	    int min=-1;
	    for(int i=0;i<=100;i++){
	        double d_price=(100-i*d)*x/100.0;
	        int ans=y-i;
	        if(ans>=0 && ans>=d_price){
	            min=i;
	            break;
	        }
	        if(i*d>=100){
	            break;
	        }
	    }
	    cout<<min<<endl;
	}
	return 0;

}
