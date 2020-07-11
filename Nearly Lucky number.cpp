#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int i, j, n, a, p, k=0;
    cin >> n ;
    while(n!=0){
        p=n%10;
        if(p==4 || p==7)
        k++;
        n=n/10;
    }
    if(k==4 || k==7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

