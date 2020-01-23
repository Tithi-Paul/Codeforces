#include<bits/stdc++.h>

using namespace std;
int main()
{
 long long int n, k, t, sum;

 cin >> t;
 while(t--){
    cin >> n >> k;
    sum=0;
    while(n>0){
    if(n>=k)
        sum++;
    sum=sum+n%k;
    n=n/k;
 }
    cout << sum << endl;
 }


}
