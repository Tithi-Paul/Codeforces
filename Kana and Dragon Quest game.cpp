#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, n, m;
        cin >> x >> n >> m;
        while(n--){
            if(x>20){
                x=x/2;
                x=x+10;
            }
            else
                break;
        }
        //cout << x << endl;
        while(m--){
            x=x-10;
        }
        if(x<1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

