///********************** Bismillahir Rahmanir Rahim *****************///
#include<bits/stdc++.h>

using namespace std;
using namespace __gnu_pbds;


typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<int>::iterator vit;
typedef set<int> si;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<char, int> mci;
typedef pair<int, int> pii;
typedef pair<string, int> psi;
typedef pair<int, string> pis;
typedef pair<string, string> pss;
typedef tree< long long, null_type, less_equal<long long>, rb_tree_tag,tree_order_statistics_node_update > ordered_set;

#define f first
#define s second
#define endl '\n'
#define sp <<" "<<
#define pb push_back
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define fora(a) for(auto u:a)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define mem(a,b) memset(a, b, sizeof(a))
#define test int tc; cin>>tc; while(tc--)
#define forn(i,n) for(auto i=0; i<n; i++)
#define printm(a) {for(auto u:a) cout<<u.f sp u.s<<endl;}
#define printv(a) {for(auto u:a) cout<<u<<" "; cout<<endl;}
#define abid() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file(); freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fori(a,b,c) {for(a = c.begin(); a!=b; a++) cout<< *a<< " "; cout<<endl;}
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);


const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;

///************************ Template End Here ************************///

int main()
{
   int t;
   cin>>t;
   while(t--)

    
    {
        int n;
        cin>>n;

        if(n%4==0) 
        cout<<n/4<<endl;
        else 
        cout<<(n/4)+1<<endl;
    }

    return 0;
}

