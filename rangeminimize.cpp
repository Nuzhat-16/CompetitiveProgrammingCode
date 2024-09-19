#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
          int t;
          cin>>t;
          while(t--){
              int n;
              cin>>n;
              int arr[n];
             
              for(int i=0;i<n;i++){
                  cin>>arr[i];
              }
              int sum=0;
              sum += *min_element(arr, arr + n);
          
          cout<<sum<<endl;
}
}