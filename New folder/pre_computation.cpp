#include<bits/stdc++.h>

using namespace std;
#define ll long long
const int M=1e9+7;
const int N=1e3+10;

// ll fact[N];
int arr[N][N];
int pre[N][N];

int main()
{   
    // Precomputation
    // Method -1
    // ll t1;cin>>t1;
    // while(t1--){
    //     ll n;cin>>n;
    //     ll ans=1;
    //      for(int i=2;i<N;i++){
    //     ans=(ans*i)%M;
    //     }
    //     cout<<ans<<endl;
    // }
    // TC-> O(N*T);

    // fact[0]=fact[1]=1;
    // for(int i=2;i<N;i++){
    //     fact[i]=(fact[i-1]*i)%M;
    // }
    // int t;
    // cin>>t;
    // while(t--){
    //     ll n;cin>>n;
    //     cout<<fact[n]<<endl;
    // }
    // O(T) -> as all the fact are precomputed;

    // Hashing;
    // ll n;
    // cin>>n;
    // ll arr[n];
    // for(int i=0;i<n;i++) cin>>arr[i];
    // ll t;
    // cin>>t;
    // while(t--){
    //     ll x;cin>>x;
    //     ll ans=0;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]==x) ans++;
    //     }
    //     cout<<ans<<endl;
    // }
    // TC-> O(N*T)
     
    // ll n;cin>>n;
    // ll arr[n];
    // memset(arr,0,sizeof(arr));
    // for(int i=0;i<n;i++){
    //     ll x;cin>>x;
    //     arr[x]+=1;
    // }
    // ll t;
    // cin>>t;
    // while(t--){
    //     ll v;
    //     cin>>v;
    //     cout<<arr[v]<<endl;
    // }
    // TC-> O(N);

    // Prefix Sum;
    
    // ll n;
    // cin>>n;
    // for(int i=1;i<=n;i++) cin>>a[i];
    // ll q;
    // cin>>q;
    // while(q--){
    //     ll l,r;
    //     cin>>l>>r;
    //     ll sum=0;
    //     for(int i=l;i<=r;i++)  sum+=a[i];
    //         cout<<sum<<endl;
    // }
    // TC-> O(N^2);
     
    // ll n;cin>>n;
    // for(int i=1;i<=n;i++) cin>>a[i];
    // ll pre[n+1]={};
    // for(int i=1;i<=n;i++) pre[i]=pre[i-1]+a[i];
    // ll t;
    // cin>>t;
    // while(t--){
    //     ll l,r;cin>>l>>r;
    //     cout<<(pre[r]-pre[l-1])<<endl;
    // }
    // O(Q);

    // prefix sum in 2D array;

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // int q;
    // cin>>q;
    // while(q--){
    //     int a,b,c,d;
    //     cin>>a>>b>>c>>d;
    //     ll sum=0;
    //     for(int i=a;i<=c;i++){
    //         for(int j=b;j<=d;j++){
    //             sum+=arr[i][j];
    //         }
    //     }
    //     cout<<sum<<endl;
    // }
    // O(Q* N^2);

    // int n;
    // cin>>n;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         cin>>arr[i][j];
    //         pre[i][j] =arr[i][j]+pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1];
    //     }
    // }
    
    // ll q;
    // cin>>q;
    // while(q--){
    //     ll a,b,c,d;
    //     cin>>a>>b>>c>>d;
    //     cout<<pre[c][d]-pre[a-1][d]-pre[c][b-1]+pre[a-1][b-1]<<endl;
    // }

    return 0;
}