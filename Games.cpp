#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, h[105], a[105], i, j, flag=0;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> h[i] >> a[i];
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(h[i]==a[j])
                flag++;
        }
    }
    cout << flag << endl;
}
