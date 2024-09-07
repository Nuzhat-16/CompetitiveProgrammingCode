#include<bits/stdc++.h>
using namespace std;
#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=5e3+123;
int a[mx];
int_msg_size(string msg){
    int found=0, msg_length=0;
    for(int i=0;i<(int)msg.size();i++){
        if(found)
        msg_length++;
        if(msg[i]==':'){
            found=1;
        }
    }
    return msg_length;
}
int main(){
    
}