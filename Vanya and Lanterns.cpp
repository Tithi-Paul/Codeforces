#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main(){
    int n, m, i;
    float res, ans;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    res=max(a[0], m-a[n-1]);
    for(i=0; i<n; i++){
        ans= float(a[i+1]-a[i])*(0.5);
        if(ans>res)
            res=ans;
    }
    printf("%.17f\n", res);
}

