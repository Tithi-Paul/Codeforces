#include<bits/stdc++.h>
using namespace std;
int main(){
int n, a, b, c, p=0, i;
    cin >> n ;
    for(i=1; i<=n; i++){
    cin >> a >> b >> c;
    if(a==1 && b==1 || b==1 && c==1 || c==1 && a==1)
        p++;
    else
        p=p;
    }
    cout << p << endl;

return 0;
}
