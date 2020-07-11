#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int i, j, n, flag=0, k, a[100005];
    cin >> n;
    for(i=0; i<n; i++){
        cin>> a[i];
    }
    k=0;
    for(i=0; i<n-1; i++){
        if(a[i]<=a[i+1]){
            flag++;
        }
        else
            flag=0;
        if(flag>k){
            k=flag;
        }
    }
    cout << k+1 << endl;
    return 0;
}
