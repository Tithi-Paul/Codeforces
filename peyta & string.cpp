#include<bits/stdc++.h>
using namespace std;
int main(){
string a, b, c, d;
int i, l;
    cin>> a >> b;
    l= a.length();
    for(i=0; i<l; i++){
       if(a[i]>= 65 && a[i]<=90)
            a[i]= a[i]+32;
       if(b[i]>= 65 && b[i]<=90)
            b[i]= b[i]+32;
          // c= tolower(a[i]);
           //d= tolower(b[i]);
    }
    if(a < b)
        cout << -1 << endl;
    else if(a > b)
        cout << 1 << endl;
    else if(a == b)
    cout << 0 << endl;

}
