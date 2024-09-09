#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x,count=0;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        for(int i=0;i<n;i++){
            if(arr[i]>=x){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
	}


