#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int n, a, b, c, d;
    cin >> t;
    while(t--){
    int flag=0;
    cin >> n >> a >> b >> c >> d;
        if(n*(a-b)<=(c+d) && n*(a+b)>=(c-d))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
}

