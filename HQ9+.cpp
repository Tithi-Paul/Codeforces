#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    long long int  n, i, flag=0;
    cin >> s;
    n=s.size();
    for(i=0; i<n; i++){
        if(s[i]=='H' || s[i]== 'Q' || s[i]=='9')
            flag++;
    }
    if(flag>0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}


