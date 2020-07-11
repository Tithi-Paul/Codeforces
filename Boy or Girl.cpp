#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long int p, z, i, j, c=0;
    cin >> s;
    p=s.size();
    for(i=0; i<p ; i++){
        for(j=i+1; j<=p ; j++){
        if(s[i]==s[j]){
            c++;
            break;
        }
    }
    }
    z=p-c;
    //cout << z;
    if(z%2==0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}


