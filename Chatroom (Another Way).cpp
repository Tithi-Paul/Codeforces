#include<bits/stdc++.h>
using namespace std;
int main(){
    int i, j=0, m, n;
    string s, s1;
    cin >> s;
    s1= "hello";
    m=s.size();
    n=s1.size();
    for(i=0; i<m; i++){
            if(s[i]==s1[j]){
                j++;
            }
    }
    if(j==5)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        return 0;

    }


