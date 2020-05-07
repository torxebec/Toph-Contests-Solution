#include  <bits/stdc++.h>
using namespace std;
#define    error(args...){string _s=#args;replace(_s.begin(), _s.end(), ',', ' ');stringstream _ss(_s);istream_iterator<string> _it(_ss);err(_it,args);}
void err  (istream_iterator<string> it) {}
template  <typename T, typename... Args>
void err  (istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a <<" ; ";
    err(++it, args...);
    cout << endl;
}
/*----------------------------------------------------------------------------------------------------------------------------------------------------*/
/*Let's start.............*/
#define   ll                long long
#define   pb                push_back
#define   ff                first
#define   ss                second
#define   srt(v)            sort(v.begin(),v.end())
#define   inf               2000000000000000000
#define   mxn               1000009
#define   MOD               1000000007
#define   pi                acos(-1)
#define X first
#define Y second

ll cum[mxn];
void solve()
{
    ll n = 100009;
    for(ll i = 2;i <= n;i++){
       for(ll j = i;i*j <= n; j+= i){
         ll l = (i*j)+1;
         ll r = (i*j) + i;
         if(l > n) continue;
         r = min(r,n);
         cum[l]++;
         cum[r]--;
         //if(j <= 10)
         //error(i,l,r);
       }
    }
    for(ll i = 1;i <= n;i++) cum[i] += cum[i-1];

}
int main()
{
   //freopen("input.txt","r",stdin);
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   solve();
   ll t;cin >> t; ll cs = 0;
   while(t--){
    ll n; cin >> n;
    printf("Query %lld: %lld\n",++cs,cum[n]);
   }
   return 0;
}

/*-------------------------------------------------------------------------------------------------------------------------------------------------------
".....but the truth is that you can increase it slightly."
Welcome Back to Coding Day -> 0.
*/

