#include <bits/stdc++.h>
using namespace std;
    int missingNumber(vector<int>&array,int n){
        int sum=0;
        for(int i=0;i<n-1;i++){
            sum+=array[i];
        }
        int ans=n*(n+1)/2;
        return ans-sum;
    }
    int main(){
        int n; 
    cin >> n;

    vector<int> array(n-1); 
for (int i = 0; i < n-1; i++) {
        cin >> array[i];
    }

    cout << missingNumber(array, n) << endl;

    return 0;
    
    
    }