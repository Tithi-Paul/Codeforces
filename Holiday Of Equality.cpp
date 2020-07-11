#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a[100005], i, sum=0, minite, need;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    if(n==1){
        cout << 0 << endl;
        return 0;
    }
    for(i=0; i<n; i++){
        need=a[n-1]-a[i];
        sum= sum+need;
    }
    cout << sum << endl;
    return 0;

}

