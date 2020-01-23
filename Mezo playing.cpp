 #include<bits/stdc++.h>
#define ll long long
#define fi first
#define pb push_back
#define se second
#define rctxdy ios_base::sync_with_stdio(0), cin.tie(0);
#define mod 1000000007


using namespace std;
int main()
{
ll cmmdc(ll a, ll b)
{
    ll c;
    while(b)
    {
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}
int main()
{
    rctxdy
    ll n;
    cin >> n;
    ll aa = 0, bb = 0;
    for(ll i = 1; i * i <= n; ++i)
    {
        if(n % i == 0)
        {
            if(n / cmmdc(i, n/i) == n)
                aa = i, bb = n/i;
        }
    }
    cout << aa << " " << bb;
    return 0;
}
