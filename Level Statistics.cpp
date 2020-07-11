#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a[1005], b[1005], i, j, flag=0,n, p, q;
        cin >> n;
        for(i=0; i<n; i++)
            cin >> a[i] >> b[i];
        if(a[0]< b[0])
            flag=1;
        for(i=1; i<n; i++){
            p=a[i]-a[i-1];
            q=b[i]-b[i-1];
            if(p<0)
                flag=1;
            else if(q<0)
                flag=1;
            else if(q>p || a[i]<b[i])
                flag=1;
        }
        if(flag==1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}


