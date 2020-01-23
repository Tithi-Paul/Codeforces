#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    int n, p, i, a=0, d=0;
    cin >> n;
    for (i=0; i<n; i++){
        cin >> s[i];

}
    p = strlen(s);
    for(i=0; i<p; i++){
        if(s[i]=='A')
           a++;
        else if(s[i]=='D')
            d++;
    }
    if(a==d)
        cout<< "Friendship" ;
    else if(a>d)
        cout << "Anton" ;
    else
        cout << "Danik";

}
