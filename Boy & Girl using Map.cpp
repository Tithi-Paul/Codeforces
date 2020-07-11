#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector<char>v;
    int i, m, H;
    map<char,int>M;
    cin >> s;
    m=s.size();
    for(i=0; i<m; i++){
        M[s[i]]++;
    }
    for(char b='a'; b<='z' ; b++){
        //cout << b << M[b] << endl;
        if(M[b]>0)
            v.push_back(b);
            H=v.size();
    }
            //cout << H;
    if(H%2==0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}
