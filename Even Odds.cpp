#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int n, i, k, m;
    cin >> n >> k;
    if(n%2==0)
        m=n/2;
    else
        m=(n/2)+1;
    if(k<=m)
        cout << 2*k-1 << endl;
    else
        cout << (k-m)*2 << endl;
}

