#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int i, j, n, a, p;
    cin >> n >> a;
    cin >> s;
    p=s.size();
    for(i=1; i<=a; i++){
        for(j=1; j<p; j++){
            if(s[j]=='G' && s[j-1]=='B'){
                s[j-1]= 'G';
                s[j]='B';
                j++;
            }
        }
    }
    cout << s << endl;
}
