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
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)
#define looprev(i,a,b) 	for(int i=(a);i>=(b);i--)
#define log(args...) 	{ string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
#define logarr(arr,a,b)	for(int i=(a);i<=(b);i++) cout<<(arr[i])<<"";cout<<endl;	

//
//debug
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p)
{
	return os<<"("<<p.first<<", "<<p.second<<")";
}
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
 
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

vector<bool> vis(mx + 1, 0);
vector<int> prefix(mx + 5, 0);

bool is_afraid(int n) {
  string num = to_string(n);
  if (num.find('0') != num.npos)
    return false;
  int x = 1;
  for (int i = 1; i < num.size(); i++) {
    x *= 10;
    if (vis[n % x] != true) {
      return false;
    }
  }
  return true;
}


void seive() {
  for (int i = 2; i <= mx; i++) {
    vis[i] = true;
  }
  for (int i = 2; i * i <= mx; i++) {
    if (vis[i] == true) {
      for (int j = i * i; j <= mx; j += i) {
        vis[j] = false;
      }
    }
  }
  for (int i = 1; i < vis.size(); i++) {
    if (vis[i] == true && is_afraid(i)) {
      prefix[i + 1] = prefix[i] + 1;
    } else {
      prefix[i + 1] = prefix[i];
    }
  }
}



//erase function   s.erase(remove(s.begin(),s.end(),'a'),s.end());
//check char       isupper(char) islower(c)  isspace(c) 
//convert char     char = toupper(char)   c = tolower(c)
//avoid string space problem     cin.ignore()

// SET             PRINT UNIQUE ELEMENT IN SORTED ORDER  // insert()
// SET  - sort the unique element && only return the unique element (while erase the repeated element)
// SET (PAIR) -  it return unique elements of the pair


// STACK           LIFO  - Last In First Out             // push()
// we can not iterate stack without pop the top element
// print every element 
//while( ! st.empty() ){cout<< st.top() <<endl;st.pop();}


// QUEWE           FIFO  - First In First Out            // push()
// while( ! q.empty() ){cout<< q.front() <<" ";q.pop(); }


// vector < pair < key , value > > v ;
// PAIR - it returns every element after sorting according to key  (and then value if repeated found)
//        *** return every element ***





 void solve(){

 	  
 	  
 }

  
void solve_with_test_case(){

	int t;
	cin>>t;

	while(t--){
		solve();
	}
}

int32_t main(){
	
	fastIO();

	solve_with_test_case();
	//solve();
	
} 



