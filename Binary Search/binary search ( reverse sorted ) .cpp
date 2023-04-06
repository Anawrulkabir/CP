///   ***   ---   |||		 In the name of ALLAH		|||   ---   ***   ///
 
#include <bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
typedef string str;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;


#define int long long int 
#define endl '\n'
#define pb push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
 
#define fastIO() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.in","r",stdin);freopen("output.in","w",stdout);
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define log(args...) 	{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b)	for(int i=(a);i<=(b);i++) cout<<(arr[i])<<"";cout<<endl;	

//
//debug
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0);
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}
//#else
//#define dbg(args...)
 
ll gcd ( ll a, ll b ) { return gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
 
 
int dx[] = { 0, 0, +1, -1, -1  +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };




void BinarySearch_reverse_sorted(vector<int>v ,int n , int x){
	
	int l=0;
	int r=n-1;
	
	while(l <=r )
	{
		
		int mid = (l+r)/2.0;
	    if(v[mid] == x) {
		 cout<< "Found"<<endl;
		 cout<< "Index = "<< mid << endl;
		 return;
	    }
	    else if (v[mid] < x ) r = mid - 1;
	    else l = mid + 1;
	
   }
   cout<<"Not Found"<<endl;
	
}

 void solve(){
   
   int n;
   cin>>n ;
   
   
   vector<int> v(n);
   for (int i=0 ; i<n ; i++){
   	 cin>>v[i];
   }
   sort(rall(v));
   for (int i=0 ; i<n ; i++){
   	 cout<<v[i]<<" ";
   }
   cout<<endl;
   int x ;
   cin>>x;
   
  BinarySearch_reverse_sorted(v, n , x);
      
       
   
 } 
  



int32_t main(){

    
	
	fastIO();

	int t;
	cin>>t;

	while(t--){
		
		solve();
		
	}
	
	
	
} 

/*

input :
1
5
4 3 1 2 5
2

output :
5 4 3 2 1 
Found
Index = 3


*/
