#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long int i, j, n, a, p, k=0;
    cin >> n >> a;
    for(i=1; i<=a; i++){
        if(n%10!=0)
            n=n-1;
        else
            n=n/10;
    }
        cout << n << endl;
}

