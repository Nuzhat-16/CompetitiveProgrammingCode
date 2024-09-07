#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	int z;
	    cin>>z;
	    if(z>5000)
	    cout<<z-500<<endl;
	    else if(z<=5000 && z>1000)
	    cout<<z-100<<endl;
	    else if(z<=1000 && z>100)
	    cout<<z-25<<endl;
	    else
	    cout<<z<<endl;
}

}
