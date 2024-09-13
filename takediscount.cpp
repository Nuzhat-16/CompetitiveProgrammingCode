#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        int sum=0;
        int n_price=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]>y){
                n_price+=a[i]-y;
            }
            
        }
n_price=n_price+x;
if(n_price<sum){
    cout<<"COUPON"<<endl;
}
else{
    cout<<"NO COUPON"<<endl;
}
}
}