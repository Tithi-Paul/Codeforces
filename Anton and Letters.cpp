#include<bits/stdc++.h>
using namespace std;
int main(){
        set<char>s;
        string c;
        int n, i, l;
        getline(cin, c);
        l=c.size();
        //cout << c << " ";
        for(i=0; i<l; i++){
            if(c[i]>='a' && c[i]<= 'z')
             s.insert(c[i]);
        }
        cout << s.size() << endl;
}



