#include<bits/stdc++.h>
using namespace std;
int main(){
int i, l;
string a, b;
cin >> a >> b;
l=a.size();
for(i=0; i<l; i++){
    if(a[i]==b[i])
        cout << "0";
    else
        cout << "1";
}
}
