#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n, i, sum=0, flag=0;
        cin >>  n;
        long long int a[n+1];
        for(i=0; i<n; i++){
            cin >> a[i];
        }
        for(i=0; i<n; i++){
            if(a[i]==0){
                a[i]++;
                flag++;
            }
            sum=sum+a[i];
        }
        if(sum==0)
            flag++;
        cout << flag << endl;
    }
}

