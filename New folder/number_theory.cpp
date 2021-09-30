 // gcd -> highest common divisor;
    // product of minimum power of every factor in prime factorisation;

    // 4 12 ->4;
    // 18 12 ->6

    // lcm -> product of max power of every factor in prime factorisation;

    // a*b=gcd(a,b)*lcm(a,b);
    ll a=100;
    ll b=20;
    dis(a*b);
    dis(gcd(a,b)*lcm(a,b));

ll gcd(ll a,ll b)
{
  if (!b) return a;
  return gcd(b,a%b);
}
// gcd
// to convert any number to its lowest from
// a/b -> (a/gcd(a,b))/(b/gcd(a,b));

ll lcm(ll a,ll b)
{
  return (a*b) /gcd(a,b);
}
// lcm

// binary exponentiation;
 // pow inbuilt return the double;
 // but for higher values the double return the false values;
 // so in cp for higher power avoid the pow;
 
 // for power 
    ll a=3;
    ll b=7;
    ll ans=1;
    for_i(i,0,b){
        ans*=a;
    }
    dis(ans);
    // O(N);
int power_bin(int a,int b){
    if(b==0) return 1;
    int res=power_bin(a,b/2);
    if(b&1) return a * 1ll *res * res;
    else return res * 1ll * res;
}

int power_bin_iter(int a,int b){
    // modulo can also be passable;
    int ans=1;
    while(b){
        if(b&1) ans=ans*1ll*a;
            a=a*a*1ll;
            b>>=1;
    }
    return ans;
}


 // if m > int range or a > int range

    // case 1 a>int range
    // like 2 ^1024;
    int power_bin_iter(int a,int b){
    // a%=M or a=power_bin_iter(2,1024);
    // means for large a take first the modulo of a
    // to make under int;

    int ans=1;
    while(b){
        if(b&1) ans=ans*1ll*a;
            a=a*a*1ll;
            b>>=1;
    }
    return ans;
    }
    // case 2 m>int range;

     // case 1 a>int range
    // like 2 ^1024;
    int power_bin_iter(int a,int b){

    // in case of m>int range the equation one 
    // will become the 10 ^18 and hence overflow;
    // hence concept of binary multiplication;
    // a^a== a+a+a+_______ upto a times

    int ans=1;
    while(b){
        if(b&1) ans=binMul(ans,a);
            a=binMul(a,a);  //->equation 1
            b>>=1;
    }
    return ans;
   }


// when the m is large
int binMul(ll a,ll b){
   int ans=0;
    while(b){
        if(b&1) ans=ans+a;
            a=a+a;
            b>>=1;
    }
    return ans;
}


int power_bin_iter(long long a,long long b,int m){        
    // modulo can also be passable;
    int ans=1;
    while(b){
        if(b&1) ans=(ans*1ll*a)%m;
            a=(a*a*1ll)%m;
            b>>=1;
    }
    return ans;
}
// power calculation using bit exponentiation!!

void solve(){
   // if b is large
   // like a^b^c a ki power b ki power c;
   // concept of coprime-> a b is coprime iff gcd(a,b)=1;
   // ETF -> count K such that 1<=k<=N and N,K is coprime;
   // phie(n) =n*product of(1-1/p)  p==prime factors of N; p=distict prime numbers
    // a ki power b modulo m =aki power b modulo pie m modulo m;
    // a ki power b modulo m =aki power b modulo m-1 modulo m;
    // m is prime
    cout<<power_bin_iter(50,power_bin_iter(64,32,M-1),M);
}


 // divisor of any number;
    ll n;cin>>n;
    ll sum=0;
    ll c=0;
    // for_i(i,1,n+1){
    //   // if(n%i==0){
    //   //   cout<<i<<endl;  
    //   //   sum+=i;
    //   //   c++;  
    //   // } 
    // } 
    // O(N);
    // cout<<"Sum "<<sum<<" "<<"Count "<<c;
     for(int i=1;i*i<=n;i++){
      if(n%i==0){
        cout<<i<<" "<<n/i<<" "<<endl;  
        sum+=i;
        c++;
        if(n/i!=i){
            sum+=n/i;
            c++;
        }
      } 
    }
    // O(sqrt(n));
     cout<<"Sum "<<sum<<" "<<"Count "<<c; 
 // ll n-> factors are 1 and n
    // ll n;cin>>n;
    // bool is_p=1;
    // for_i(i,2,n){
    //     if(n%i==0){
    //         is_p=0;
    //         break;
    //     }
    // }
    // is_p==0?dis("Not Prime"):dis("Prime");
    // O(N);

    // ll n;cin>>n;
    // if(n==1){
    //     cout<<"Prime"<<endl;
    //     return;
    // }
    // bool is_p=1;
    // for(int i=2;i*i<=n;i++){
    //     if(n%i==0){
    //         is_p=0;
    //         break;
    //     }
    // }
    // // O(sqrt(N));
    // is_p==0?dis("Not Prime"):dis("Prime");
    // kisi bhi number ka sabse chota divisor ek 
    // prime number hota hai!


     // print all prime factor of n;
     ll n;cin>>n;
     ve<ll> arr;
     for(int i=2;i*i<=n;i++){
       while(n%i==0){
        arr.pb(i);
        n=n/i;
       }
    }
    // for which the number become prime;
    if(n>1)  arr.pb(n);
    // O(N);
    for_s(i,arr) cout<<i<<" ";


// sieve algorithms;
vector<bool> prime_num(1e7+10,1);
void prime_upto_n(ll n,ve<bool> &prime_num){
   prime_num[0]=prime_num[1]=false;
   for_i(i,2,n){
      if(prime_num[i]==true){
          for(int j=2*i;j<n;j+=i){
             prime_num[j]=false;
          }
      }
   }
}
 int q;
   cin>>q;
   while(q--){
    int n;cin>>n;
    if(prime_num[n]) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;
   }

vector<bool> prime_num(1e7+10,1);
ve<int> lp(1e7+10,0),hp(1e7+10,0);
void prime_upto_n(ll n,ve<bool> &prime_num){
   prime_num[0]=prime_num[1]=false;
   for_i(i,2,n){
      if(prime_num[i]==true){
        lp[i]=hp[i]=i;
          for(int j=2*i;j<n;j+=i){
             prime_num[j]=false;
             hp[j]=i;
             if(lp[j]==0) lp[j]=i;
          }
      }
   }
}

// for_i(i,1,100){
  //   cout<<lp[i]<<" "<<hp[i]<<endl;
  // }
  int n;
  cin>>n;
  ve<ll> prime_factors;
  map<ll,ll> prime_factors;
  while(n>1){
    int prime_factor=lp[n];
    while(n%prime_factor==0){
        n/=prime_factor;
        prime_factors.pb(prime_factor);
        prime_factors_map[prime_factor]++;
    }
  }
  // for_s(i,prime_factors) cout<<i<<" ";
for_s(i,prime_factors_map) cout<<i.first<<" "<<i.second<<endl;
// can do this with the hp as well;

vector<int> divisors[N];
    for(int i=2;i <N;++i)
    {
        for(int j=i; j< N;j+=i)
        {
            divisors[j].push_back(i);
        }
    }
    for (int i = 2; i < 10; ++i)
    {
        for(auto div:divisors[i]){
            cout<<div<<" ";
        }
        cout<<endl;
    }
// divisors for any numbers;


// (a+b)%m =((a%m)+(b%m))%m;
// (a*b)%m =((a%m)*(b%m))%m;
// (a-b)%m =((a%m)-(b%m)+m)%m;

// modular arithemetic

  // (a/b)%m =(a*b^-1)%m;
    //         =((a%m)*(b^-1)%m)%m;
    // b^-1%m =mmi of b -> modular multiplicative inverse of b. 
    // loop from 1 to m-1  if (a*b)%m ==1;
    // b is multiplicative inverse of a;
    // mmi of any two numbers(a,b) is possible and defined
    // only when gcd(a,b)=1;
    // but if m=1e9+7;
    // so not possible to make a loop;
    // hence use the fermet theorm;
    // a^m-1 =1mod(m)->fermet theorm;

    // a^m-2%m=a^-1
    // a^-1 required;

    // cout<<binexpo(2,M-2,M);
    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i]=(fact[i-1]*1ll*i) %M;
    }
    int q;cin>>q;
    while(q--){
        int n,k;
        cin>>n>>k;
        int ans=fact[n];
        int den =(fact[n-k]*1ll*fact[k])%M;
        ans=ans*binexpo(den,M-2,M);
        cout<<ans;
    }

int binexpo(int a,int b,int m){
    int res=1;
    while(b>0){
        if(b&1){
            res=(res*1ll*a)%m;
        }
        a=(a*1ll*a)%m;
        b>>=1;
    }
    return res;
}

onst int M=1e9+7;
const int N=1e5+10;

int fact[N];
int binexpo(int a,int b,int m){
    int res=1;
    while(b>0){
        if(b&1){
            res=(res*1ll*a)%m;
        }
        a=(a*1ll*a)%m;
        b>>=1;
    }
    return res;
}

int main()
{   
    fact[0]=1;
    for(int i=1;i<N;i++){
        fact[i]=(fact[i-1]*i*1ll)%M;
    }
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=fact[n];
        ans=(ans*1ll*fact[k])%M;
        int deno=(fact[k-n]*1ll*fact[n])%M;
        ans=(ans*1ll*binexpo(deno,M-2,M))%M;
        cout<<ans<<endl;
    }

