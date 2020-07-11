#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int>S;
    int n, a, b, i, l, p, q;
    cin >> n;
    cin >> a;
    for(i=0; i<a; i++){
        cin>> p;
        S.insert(p);
    }
    cin>> b;
    for(i=0; i<b; i++){
        cin>> q;
        S.insert(q);
    }
    l= S.size();
    if(l==n)
        cout << "I become the guy.";

    else
        cout << "Oh, my keyboard!";
}


