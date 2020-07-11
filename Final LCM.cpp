#include<bits/stdc++.h>
using namespace std;
long long int gcd( long long int a, long long int b) {
   if (b == 0)
      return a;
return gcd(b, a % b);
}

int main()
{
    long long int a, b, n, i,ans=0, m=0;
    cin >> n;
    for(i=1; i<=sqrt(n); i++){
        if(n%i==0){
            a=i;
            b= n/a;
            if(gcd(a,b)==1)
			{
                ans=a;
				m=b;
			}

        }
    }
     cout << m << " " << ans << endl;
}

