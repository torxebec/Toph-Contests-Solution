#define  ll               long long
#define  pb               push_back
#define  ff               first
#define  ss               second
#define  srt(v)           sort(v.begin(),v.end())
#define  mxn              10000000
#define  mx               1000000000
#define  mod              1000000007
#define  pi               acos(-1)
#define  ordered_set      sum<ll, null_type,less<ll>, rb_sum_tag,sum_order_statistics_node_update>
#include <bits/stdc++.h>
using namespace std;

template <class T> inline T bigmod(T p,T e,T M)
{
    ll ret=1;
    for(; e>0; e>>=1)
    {
        if(e&1)
            ret=(ret*p)%M;
        p=(p*p)%M;
    }
    return(T)ret;
}
template <class T> inline T modinverse(T a,T M)
{
    return bigmod(a,M-2,M);
}


int main()
{
    ll keep = modinverse(4,mod);
    cout << keep << endl;
    cout << (3*keep) % mod << endl;
    return 0;
}


