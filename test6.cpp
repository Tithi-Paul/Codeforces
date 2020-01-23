#include<bits/stdc++.h>
using namespace std;
int main(){
int i,ln,ck;
string s;
    cin >> s;
    ln=s.length();
    ck=0;
    for(i=0; i<ln; i++){
        if(s[i]==s[i+1]){
           ck++;
           }
    }
           cout << ck << endl;

    /*if(cont>=6)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;*/

return 0;
}
