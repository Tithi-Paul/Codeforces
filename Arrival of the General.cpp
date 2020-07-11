#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, a[105], i, mn=155, mx=0, flag=0, flag1=0;
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> a[i];
    }
    for(i=1; i<=n; i++){
        if(a[i]>=mx)
            mx=a[i];

        if(a[i]<=mn)
            mn=a[i];
    }
    //cout << mx << endl;

    for(i=1; i<=n; i++){
        if(a[i]==mx){
            flag=i;
            break;
        }
    }
    int p=1;
    for(i=n; i>=1; i--){
        if(a[i]==mn){
            flag1=p;
            break;
        }
    p++;
    }
   // cout << flag << " "<< flag1;
    if(flag>0){
        flag=flag-1;
    }
    if(flag1>0){
        flag1=flag1-1;
    }
    if(flag+flag1>=n)
        cout << flag+flag1-1 << endl;
    else
        cout << flag+flag1 << endl;

}
