#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s;
    int p, z, i, j, c=0;
    cin >> s;
    p=s.size();
    for(i=0; i<p ; i++){
        if(s[i]!=s[i+1])
            c++;
    }
    cout << p-c << endl;

    return 0;
}

