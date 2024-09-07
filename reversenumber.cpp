int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0,r;
        cin>>n;
        for(;n>0;n=n/10){
            r=n%10;
            sum=sum*10+r;
        }
        cout<<sum<<endl;
    }
    return 0;
	}


