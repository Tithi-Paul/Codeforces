#include<bits/stdc++.h>
using namespace std;
int main(){
    string A, B;
    cin >> A >> B;
    reverse(A.begin(), A.end());
    if(A==B)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
    }
