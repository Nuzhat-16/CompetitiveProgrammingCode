#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int n, int x){

    for(int i=0;i<n;i++){

        if(arr[i]==x){
            return 1;
        }
    }
    return 0;
}

int main() {
	
	int n,x;
	cin>>n>>x;
	int arr[n];
	
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	
	bool found = search(arr,n,x);
	if(found){
	    cout<<"yes";
	}
	else{
	    cout<<"no";
	}
	
return 0;
}