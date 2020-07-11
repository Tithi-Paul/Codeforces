#include<bits/stdc++.h>
using namespace std;
int main(){
     int a[5], b, c, d, i;
     for(i=0; i<4; i++)
        cin >> a[i];
     sort(a, a+4);
     b= a[3]-a[2];
     c= a[3]-a[1];
     d= a[3]-a[0];
     cout << b  << " " << c << " " << d;
}
