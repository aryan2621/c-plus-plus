
void pr_binary(int num){
    for(int i=10;i>=0;i--) cout<<((num>>i)&1);
    cout<<endl;
}

// lsb->0th bit(right most) msb-> nth bit(left most)
// 0->unset 1->set


 pr_binary(13);
  int i=2;
  int a=13;
  if((a&(1<<i))!=0) cout<<"set"<<endl;
  // check if set or not;
  else cout<<"Not set"<<endl;

  pr_binary(a | (1<<1));
  // set that ith bit;

  pr_binary(a&(~(1<<3)));
  // unset the ith bit;

  pr_binary(a ^ (1<<2));
  // toggle the operation;
   
  int ans=0;
  for (i=31; i>=0;--i)
  {
    if((a&(1<<i))!=0) ans++;
  }
  dis(ans);
  cout<<__builtin_popcountll((1ll<<35)-1);

 for_i(i,0,8){
    pr_binary(i);
    if(i&1) dis("odd");
    else dis("even");
}

 int n=5;
 n=n>>1;
 // by two
 dis(n);
 n=n<<2;
 // into two

 for_i(i,0,8) {
    cout<<i<<"--";
    pr_binary(i);
    if(i&1) cout<<"odd"<<endl;
    else cout<<"even"<<endl;   

    // better than n%2==0;

    dis()
}
int n=3;
  cout<<(n<<1)<<endl;
  cout<<(n>>1)<<endl;;
  //( high +low )>>1;
  // >> by 2;
  // << into two

    for(char c='A';c<='Z';c++){
      cout<<c<<" ";
      pr_binary(int(c));
    }
    for(char c='a';c<='z';c++){
      cout<<c<<" ";
      pr_binary(int(c));
    }
    // difference between upper and lower binary is that
    // in upper 5th bit!=1;
    // in lower 5th bit =1;
    cout<<char('A'|(1<<5))<<endl;
    // in lower case;

    cout<<char('A'&(~(1<<5)))<<endl;
    // in upper case;

    // actually char of 1<<5 is _(space);
    // take any upper case and its or with space will get the lower;

    cout<<char('C'|' ')<<endl;
    // will make it small c

    // take any lower case and its or
    // with _(underscore) will get the upper; 
    cout<<char('c'&'_')<<endl;
    // will make it capital C


 pr_binary(59);
   // for clearing the set bits upto ith bit

   int i=4;
   // clearing upto 5 the place;
   int a=59;
   int b=(a&(~((1<<(i+1))-1)));
   // clearing the lsb upto ith bit;
   pr_binary(b);
   
   i=3;
   int c=(a&((1<<(i+1))-1));
   // clearing the msb upto ith bit;
   pr_binary(c);

   // check power of two;
   int n=16;
   n&(n-1)?dis("NO"):dis("YES");

// swap;
  int a=4;
  int b=5;
  a=a^b;
  b=b^a;
  a=a^b;
  // cout<<a<<" "<<b;

  // 1 0--> 1;
  // 0 1--> 1;
  // 0 0--> 0;
  // 1 1--> 0;
  // x ^ 0=x;
  // x ^ x=0;
  // xor operation is associative;
  ll n;cin>>n;
  int x=0;
  for_i(i,0,n){
    ll v;
    cin>>v;
    x=x^v;
  }
  dis(x);

    // Bit-masmking 
  
    // lichi-0
    // apple -1
    // banana -2
    // orange -3

    // 2 ,3 1100 -> 12; (means 2 3 set means consist of orange
    // and banana)
    // 0,1,2 0111 -> 7(means 0 1 2 means apple lichi banana);
    // 1,3 1010 -> 9 (means have orange and apple);
    // ll n;cin>>n;
    // ve<ll> days[n];
    // for_i(i,0,n){
    //   int num_workers;
    //   cin>>num_workers;
    //   for_i(i,0,num_workers){
    //     int d;cin>>d;
    //     days[i].pb(d);
    //   }
    // }
    // if done bruteforce manner -> 0(N^2 *30);

    ll n;
    cin>>n;
    ve<ll> masks(n);
    for_i(i,0,n){
      int num_workers;
      cin>>num_workers;
      int mask=0;
      for_i(i,0,num_workers){
        int d;cin>>d;
        mask =(mask|(1<<d));
      }
      masks[i]=mask;
    }
    int mas_days =0;
    for (int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;j++){
            int inter =(masks[i] & masks[j]);
            mas_days=maxs(mas_days,setbits(inter));
        }
    }
    dis(mas_days);

    // A simple question to create the  subset based on the bit manipulation.
    int n;
    cin>>n;
    int arr[n];
    ve<ve<ll>> subsets;
    for_i(i,0,n) cin>>arr[i];
    int sub_cnt=(1<<n);
    for_i(mask,0,sub_cnt){
        ve<ll> subset;
        for_i(i,0,n){
            if((mask&(1<<i))!=0) subset.pb(arr[i]);
        }
        subsets.pb(subset);
        subset.clear();
    }
    for_s(i,subsets){
        for_s(j,i){
            cout<<j<<" ";
        }
        cout<<endl;
    }