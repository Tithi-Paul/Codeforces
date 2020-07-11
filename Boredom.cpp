#include<bits/stdc++.h>
using namespace std;
map<long long int, long long int>mp;
int main(){

    long long int n, i, j, k;
    cin >> n;
    long long int a[n+1];
    for(i=0; i<n; i++){
        cin >> a[i];
        mp[a[i]]=mp[a[i]]+a[i];
    }
    sort(a, a+n);
    k = a[n-1];
    for(j=2; j<k+1; j++){
        mp[j]= max(mp[j-1], mp[j]+mp[j-2]);
    }
    cout << mp[k] << endl;
}
