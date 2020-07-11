#include<bits/stdc++.h>
using namespace std;
set<char>s;
int main()
{
    string o;
    int i, n, m;
    cin>>o;
    n = o.size();
    for(int i = 0; i<n ; i++){
        s.insert(o[i]);
    }
    m= s.size();

    //cout<< m <<endl;
     if(m%2==0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

}
