#include<bits/stdc++.h>
using namespace std;
int main(){
    double n, m, a, x, y;
    long long int p;
    cin >> n >> m >> a ;
    x= ceil(n/a);
    y= ceil(m/a);
    p= x*y;
    /*if(a==1)
        cout << n*m << endl;
    else*/
        cout << p << endl;
return 0;
}




