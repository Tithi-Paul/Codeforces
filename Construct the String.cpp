#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        char s;
        int n, a, b,  ans, i, x=96, y=1 ;
        cin >> n >> a >> b;
        for(i=0; i<n; i++){
            x++;
            s= x;
            cout << s;
            y++;
            if(y>b){
                x=96;
                y=1;
            }
        }
        cout << endl;
    }
}

