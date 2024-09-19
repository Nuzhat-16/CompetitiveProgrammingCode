#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
	cin>>x>>y>>z;
	   double fav_team=x*1+y*0.5;
	   double opposite_team=z*1+y*0.5;
	   int rem_game=4-(x+y+z);
	   double win_fav_team=fav_team+(rem_game*1);
	   if(win_fav_team>opposite_team){
	       cout<<"Yes"<<endl;
	   }
	   else{
	       cout<<"No"<<endl;
	   }
return 0;
}
