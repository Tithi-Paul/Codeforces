#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int i, L=0, U=0, p;
    cin >> s;
    p=s.size();
    for(i=0; i<p; i++){
            if(s[i]>='a' && s[i]<='z'){
                L++;
            }
            else if(s[i]>='A' && s[i]<='Z'){
                U++;
            }
    }
    if(U>L){
        for(i=0; i<p; i++){
            if(s[i]>='a' && s[i]<='z')
                s[i]=(s[i]-'a'+'A') ;
        }
    }
    else {
        for(i=0; i<p; i++){
            if(s[i]>='A' && s[i]<='Z')
                s[i]=(s[i]-'A'+'a');
        }
    }
    cout << s << endl;

    return 0;
}
