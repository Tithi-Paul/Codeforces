#include<bits/stdc++.h>
using namespace std;
int main(){
    int m, n, a[3], i, dis1=0, dis2=0;
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);
        m = a[2]-a[1];
        dis1= dis1+m;
        n = a[1]-a[0];
        dis2 = dis2+n;

    cout << dis1+dis2 << endl;
}
