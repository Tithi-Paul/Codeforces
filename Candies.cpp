#include<bits/stdc++.h>
using namespace std;
int main(){
    int test, candy, m, n;
    cin >> test;
    while(test--){
        int candy, m=3, n=4;
        cin >> candy;
            while(true){
            if(candy%m==0){
                break;
            }
            m = m+n;
            n = 2*n;
        }
        cout << (candy/m) << endl;
    }
}
