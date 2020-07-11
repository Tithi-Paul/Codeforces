#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
    double n, a, b, c, d, p, q, r, s;
    cin >> n >> a >> b >> c >> d;
    p = a+b;
    q = abs(a-b);
    r = c+d;
    s = abs(c-d);
   // cout << " "<< p << " "<<  q <<  " "<< r << " "<<s << endl;
    if(r/p==n || c/p == n || s/p == n || d/p == n || r/a == n || c/a == n || s/a == n || d/a == n || r/q == n || c/q == n || s/q == n || d/q == n || r/b==n || c/b == n || s/b == n|| d/b == n){
        cout << "Yes" << endl;
    } else
        cout << "No" << endl;

    }
}
