#include<bits/stdc++.h>
using namespace std;
int main(){
    ios :: sync_with_stdio(false); cin.tie(0);
    int n;
    cin >> n;
    long long int  m, i, x, j, flag;
    for(i=0; i<n; i++){
        cin>> x;
        m=sqrt(x);
        for(j=2; j*j<m; j++){
            if(x%j==0){
                break;
            }
        }
        if(m*m==x && x>1 && j*j>m)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}


