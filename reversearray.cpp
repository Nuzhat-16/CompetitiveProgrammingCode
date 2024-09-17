#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int temp[5], i=4, j=0;
    while(i>=0){
temp[j]=arr[i];
j++;
i--;
    }
    for(int k=0;k<5;k++){
    cout<<temp[k]<<endl;
}}