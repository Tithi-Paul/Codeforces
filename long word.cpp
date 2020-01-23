#include<bits/stdc++.h>
using namespace std;
int main(){
string s, b;
int t, a, i;
cin >> t;
for(i=1; i<=t; i++)
{
cin>>s;
a= s.length();
if(a>10){
//cout << a << endl;
//for(i=1; i<=a; i++)
    cout<< s[0] << a-2 << s[a-1] << endl;
}
    else
        cout << s << endl;
}
return 0;
}


