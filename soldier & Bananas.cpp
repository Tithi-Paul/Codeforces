#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i, k, n, w,p, h, sum=0;
    cin >> k >> n >> w;
    for(i=1; i<=w; i++){
        p=k*i;
        sum=sum+p;
        h=sum-n;
    }
    if(h>0)
        cout << h << " ";
    else
        cout << 0 << " ";

        return 0;

    }



