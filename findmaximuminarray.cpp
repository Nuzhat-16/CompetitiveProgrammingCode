#include <bits/stdc++.h>
using namespace std;
#define MAX(a,b) (a>b)?a:b
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int max=0;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	         max = MAX(max,arr[i]);
	    }
	    cout<<max<<endl;
	}

}
