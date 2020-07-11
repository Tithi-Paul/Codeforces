#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t;
    cin >> t;
    while(t--){
        long long int n, x, i, k=1, flag=0;
        cin >>  n >> x;
        long long int a[n+1];
        for(i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
       // for(i=0; i<n; i++)
       // cout << a[i] << " " ;
       if(a[n-1]>=x)
        flag=1;
       for(i=n-2; i>=0; i--){
            a[i]=a[i]+a[i+1];
            k++;
            if(a[i]>=(k*x))
                flag++;
            else
                break;
       }
       cout << flag << endl;
    }
}
