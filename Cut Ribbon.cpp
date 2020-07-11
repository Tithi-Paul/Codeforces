#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a[3], ans=0, i, j, m, k, c;
    cin >> n >> a[0] >> a[1] >> a[2];
    //sort(a, a+3);
    for(i=0; i<=n; i++){
        for(j=0; j<=n; j++){
            c= n-i*a[0]-j*a[1];
            if(c%a[2]==0 && c>=0){
                k=c/a[2];
                m=i+j+k;
                ans= max(ans, m);
            }
        }
    }
    cout << ans << endl;
}
