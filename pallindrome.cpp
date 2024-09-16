#include<bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
int result=0;
int x,temp;
cin>>x;
int num=x;
temp=num;
while(temp!=0){
int rem=temp%10;
result=result*10+rem;
temp=temp/10;
}
cout<<result<<endl;
return 0;
}
