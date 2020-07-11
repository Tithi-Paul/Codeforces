#include<bits/stdc++.h>
using namespace std;
long long int n, m, f, i, x, j;
int main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    cin >> n;
    for(i=0; i<n; i++){
        cin>> x;
        m=sqrt(x);
        f = 0;
        for(j=2; j*j<=m; j++){
            if(m%j==0){
                f=1;
                break;
            }
        }
        if(m*m==x && x>1 && f == 0)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
        }
    return 0;
}
