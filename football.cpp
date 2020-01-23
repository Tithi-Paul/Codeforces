#include<bits/stdc++.h>
using namespace std;
int main(){
int i, cont, l;
    string s;
    cin >> s;
    l= s.length();
    cont=0;
    for(i=0; i<l; i++){
    if(s[i]==s[i-1] ){
        cont++;
   // cout << cont << endl;
    if(cont==7){
        cout << "YES" << endl;
        return 0;
    }
    }
    else
        cont=1;
    }
        cout << "NO" << endl;
        return 0;
    }


