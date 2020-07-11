#include<bits/stdc++.h>
using namespace std;
int main(){
vector<char>V;
string s;
int i, j, coun, m, n, p;
cin >> s;
m= s.size();
for(i=0; i<m; i++){
    coun=0;
    n=V.size();
    for(j=0; j<n; j++){
        if(V[j]==s[i]){
            coun++;
        }
    }
    if(coun==0)
        V.push_back(s[i]);
    }
    /*for(i = 0 ; i < n; i++){
        cout<<V[i];
    }*/
    p=V.size();
    if(p%2==0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
return 0;
}
