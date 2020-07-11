#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a, i, flag=0, mx, mn;
    cin>> n >> a;
    mx=a;
    mn=a;
    for (i=1; i<n; i++){
        cin >> a;
        if(a>mx){
            mx = a;
            flag++;
        }
        if(a<mn){
            mn=a;
            flag++;
        }
    }
    cout << flag << endl;
}
