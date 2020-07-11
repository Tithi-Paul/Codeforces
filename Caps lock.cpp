#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int i, j, n, a, L=0, U=0, pos=0, d, p;
    cin >> s;
    p=s.size();
    for(i=0; i<p; i++){
            if(s[i]>=97 && s[i]<=122){
                L++;
                pos=i;
            }
            else if(s[i]>=65 && s[i]<=90){
                U++;
            }
    }
    if((L==1 && pos==0) || U==p){
        for(i=0; i<p; i++){
             if(s[i]>=97 && s[i]<=122){
                cout << char(s[i]-32) ;
             }
            else if(s[i]>=65 && s[i]<=90){
                cout << char(s[i]+32);
            }
         }
    }
    else
    cout << s << endl;
}
