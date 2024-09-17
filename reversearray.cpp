#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int temp[5], i=4, j=0; //int i=0,j=4;

    while(i>=0){  //while(i<j)
temp[j]=arr[i];            //swap(arr[i],arr[j])
j++;                          //i++;j--;
i--;
    }
    for(int k=0;k<5;k++){
    cout<<temp[k]<<endl;
}}