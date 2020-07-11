#include<bits/stdc++.h>
using namespace std;
int main(){
int l, i, j;
string s;
cin >> s;
l=s.size();
for(i=0; i<l; i++){
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
        i=i+2;
        cout << " ";
    }
    else
        cout << s[i];

}
}
