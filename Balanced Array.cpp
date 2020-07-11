#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    while (t--){
        int n,  a, ans, i, point;
        cin >> n;
        a= n/2;
        if(a%2==1){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
            point=2; ans=0;
            for(i=0; i<a; i++){
                cout << point << " ";
                ans= ans+point;
                point = point+2;
            }
            point=1;
            for(i=0; i<a-1; i++){
                cout << point << " ";
                ans= ans-point;
                point = point+2;
            }
            cout << ans << " ";
        }
    }
}

