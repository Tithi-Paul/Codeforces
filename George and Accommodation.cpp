#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n, a, b, p=0;
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> a >> b;
        if(abs(a-b)>=2)
            p++;
    }
        cout << p << endl;
}


