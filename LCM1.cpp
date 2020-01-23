#include<bits/stdc++.h>
using namespace std;
long long int gcd( long long int a, long long int b) {
   if (b == 0)
      return a;
   return gcd(b, a % b);
}

long long int a[1000005];
int main()
{
    long long int a, b, n, i, m, u, v;
    cin >> n;
    if(n==1){
        cout << 1 << " " << 1 << endl;
    return 0;
    }
    u=n;
    v=1;
    for(i=1; i<=sqrt(n); i++){
        if(n%i==0){
            a=i;
            b= n/a;
            m= (a*b/ gcd(a, b));
            if(m==n){
                if(max(u, v) > max(a, b)){
                    u=a;
                    v=b;
                }
            }
        }
    }
    cout << u << " " << v << endl;
}

