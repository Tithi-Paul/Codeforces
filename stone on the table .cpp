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
    i=0;
    while(i<p){
        if(s[i]!=s[i+1])
            c++;
     i++;
    }
    cout << p-c << endl;


    return 0;
}

