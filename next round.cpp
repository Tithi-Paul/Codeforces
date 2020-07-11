#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100000], n, i, k, p=0;
    cin >> n >> k;
    for(i=1; i<=n; i++){
        cin >> a[i];
    }
    for(i=1; i<=n; i++){
        if(a[i]>0 && a[i]>=a[k])
            p++;
        else
            p=p;
    }
    cout<< p << endl;
return 0;
}



