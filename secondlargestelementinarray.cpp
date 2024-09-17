#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
	    cin>>n;
	    int ans=INT_MIN;
	    int arr[n];
	    for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>ans)
                ans=arr[i];
            }
            int second=INT_MIN;
            for (int i=0;i<n;i++){
                if(arr[i]!=ans)
                second=max(second,arr[i]);
            }
            cout<<second<<endl;
}