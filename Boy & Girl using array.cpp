#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int i, m, H, a[30];
    vector<char>v;
    cin >> s;
    m=s.size();
    for(i=0; i<30; i++){
        a[i]=0;
    }
    for(i=0; i<m; i++){
         int x=s[i]-'a'+ 1;
         a[x]++;
        //cout << a[x] << endl;
        }

    for(int b=0; b<=29 ; b++){
        //cout << b << M[b] << endl;
        if(a[b]>0)
            v.push_back(b);
            H=v.size();
    }
            //cout << H;
    if(H%2==0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

}
