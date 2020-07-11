#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i, a,b,c,d,k;
    cin >> k;
        for(i=k+1; i<=9999; i++){
        n=i;
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        d=n%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d ){
            cout << i ;
            break;
        }
    }
}
