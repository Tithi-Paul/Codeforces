#include<bits/stdc++.h>
using namespace std;
int main(){
int t, p=0;
string s;
    cin >> t ;
    for(int i=1; i<=t; i++){
                cin >> s;
        if (s == "X++" || s=="++X")
            p++;
        else if (s== "X--" || s=="--X")
            p--;
            else
                ;
    }
    cout << p << endl;

return 0;
}



