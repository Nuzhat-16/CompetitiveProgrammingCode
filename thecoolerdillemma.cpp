#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,p;
	    cin>>x>>y;
	    p=y/x;
	    if(p*x<y)
	    {
	        cout<<p<<endl;
	    }
	    else
	    cout<<p-1<<endl;
	}
	return 0;
}