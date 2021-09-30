/* -----------------RISHABH VERMA------------*/
// swayam swayam 
// oct end tak specialist banna
// --> bhulna nahi !!

// Don't just sit and hope that God will solve this
// fucking do something, try to observe or solve it a different way.
// Use that pen and paper.
// If nothing works take a deep breath and start again.

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
// header Files

using namespace std;
using namespace __gnu_pbds;

#define FIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#define ll long long
#define pinf INT_MAX
#define minf INT_MIN
const int M = 1e9+7;
// Data Types 

#define for_i(i,v,n) for(ll i=v;i<(ll)n;++i)
#define for_j(j,i,n) for(ll j=i;j<(ll)n;++j)
#define for_r(i,n) for(ll i=(ll)n-1;i>=0;--i)
#define for_s(i,vec) for(auto &i:vec)
// For Loops 

#define all_v(vec) vec.begin(),vec.end()
#define all_a(vec,n) vec,vec+n
// sort,reverse and other Functions

#define ve vector
#define se set
#define unmap unordered_map
#define unset unordered_set
#define pii pair<int,int>
#define pll pair<ll, ll>
#define vi vector<int>
#define mii map<int,int>
#define pqb priority_queue<int>
#define ar array
#define pqs priority_queue<int,vi,greater<int> >
#define setbits(res) __builtin_popcountll(res)
// Container

#define pp pop_back
#define pb push_back
// Vectors Methods

#define dis(k) cout << k << endl
#define endl "\n"
// Extra Things

ll mins(ll a,ll b){
  if(a>b) return b;
  return a;
}

ll maxs(ll a,ll b){
  if(a>b) return a;
  return b;
}
// Min Max


void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

// Debug;

template<class T> bool umin(T& a, const T& b) {
  return b<a?a=b, 1:0;
}
template<class T> bool umax(T& a, const T& b) { 
  return a<b?a=b, 1:0;
}


ll gcd(ll a,ll b)
{
  if (!b) return a;
  return gcd(b,a%b);
}
 // gcd

ll lcm(ll a,ll b)
{
  return (a*b) /gcd(a,b);
}
// lcm

bool isprime(int n)
{
  if (n==2) return true;
  if (n%2== 0 || n==1)return false;
  for (ll j=3;j<=sqrt(n);j+= 2)
  {
      if(n%j==0)return false;
  }
  return true;
}
// check if is prime

template<class T> using oset =tree<T, null_type,
less<T>, rb_tree_tag,tree_order_statistics_node_update> ;

// Ordered_set

vector<bool> prime_num(1e5+10,1);
ve<int> lp(1e5+10,0),hp(1e5+10,0);
void prime_upto_n(ll n,ve<bool> &prime_num){
   prime_num[0]=prime_num[1]=false;
   for_i(i,2,n){
      if(prime_num[i] && (long long)i * i <= n){
        lp[i]=hp[i]=i;
          for(int j=2*i;j<n;j+=i){
             prime_num[j]=false;
             hp[j]=i;
             if(lp[j]==0) lp[j]=i;
          }
      }
   }
}

// prime number upto n;

int lf(int x,int y){
    return x<<y;
}
int rf(int x,int y){
    return x>>y;
}
// left and right shift;

void pr_binary(int num){
    for(int i=31;i>=0;i--) cout<<((num>>i)&1);
    cout<<endl;
}
// print binary form of a number;

int power_bin_iter(long long a,long long b){        
    // modulo can also be passable;
    int ans=1;
    while(b){  
        if(b&1) ans=(ans*1ll*a);
            a=(a*a*1ll);
            b>>=1;
    }
    return ans;
}
// power calculation;

const int N=1e3+10;
int arr[N];
int seg[4*N];
void build(int ind,int low,int high){
    int mid=low+(high-low)/2;
    if(low==high){
        seg[ind]=arr[low];
        return;
    }
    build(2*ind+1,low,mid);
    build(2*ind+2,mid+1,high);
    seg[ind]=max(seg[2*ind+1],seg[2*ind+2]);
}
// segment tree build;

int query(int ind,int low,int high,int l,int r){
    if(low>=l and high<=r) return seg[ind];
    if(high<l || low>r){
        return INT_MIN;
        // return 0;
    }
    int mid=low+(high-low)/2;
    int left=query(2*ind+1,low,mid,l,r);
    int right=query(2*ind+2,mid+1,high,l,r);
    // return left+right;
    return max({left,right});
}
// query in the segment tree;

void update(int ind,int low,int high,int node,int val){
    if(low==high){
        seg[ind]+=val;
        arr[node]+=val;
    }
    else{
        int mid =low+(high-low)>>1;
         if(node<=mid and node>=low) update(2*ind+1,low,high,node,val);
         else update(2*ind+2,mid+1,high,node,val);

         seg[ind]=seg[2*ind+1]+seg[2*ind+2];
    }
} 

// update the segment tree

void solve(){
   ll n;
   cin>>n;
   ll arr[n];
   for_i(i,0,n) cin>>arr[i];
   if(arr[n-1]==15) dis("DOWN");
   else if(arr[n-1]==0) dis("UP");
   else if(n==1) dis(-1);
   else if(arr[n-1]>arr[n-2] and arr[n-1]!=15) dis("UP");
   else if(arr[n-1]>arr[n-2]) dis("DOWN");
   else if(arr[n-1]<arr[n-2] && arr[n-1]!=0) dis("DOWN");
   else dis("UP");
}
int32_t main(){    
  FIO;
  prime_upto_n(1e5+10,prime_num);
  // prime number call;
  int t=1;
  // cin>>t;
  int temp=t;
  // Google Kickstart -> 
  while(t--){ 
     // cout<<"Case #"<<temp-t<<": ";
      solve();
    }   
  return 0;
}

