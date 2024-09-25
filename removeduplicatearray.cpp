#include<bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>&nums){
     if (nums.size() == 0) return 0;
    int j=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
        nums[j]=nums[i];
        j++;
    }
    }
    return j;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    int newSize=removeDuplicate(nums);
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

   